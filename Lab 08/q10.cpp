#include <iostream>
using namespace std;

class Recommender {
public:
    virtual void generateRecommendation(int userRating, int popularity) {
        cout << "Generating recommendation score..." << endl;
    }
    virtual ~Recommender() {}
};

class PersonalizedRecommender : public Recommender {
public:
    void generateRecommendation(int userRating, int popularity) override {
        double score = (0.7 * userRating) + (0.3 * popularity);
        cout << "[Personalized] User: " << userRating 
             << ", Popularity: " << popularity 
             << " -> Final Score: " << score << endl;
    }
};

class TrendingRecommender : public Recommender {
public:
    void generateRecommendation(int userRating, int popularity) override {
        double score = (0.3 * userRating) + (0.7 * popularity);
        cout << "[Trending]     User: " << userRating 
             << ", Popularity: " << popularity 
             << " -> Final Score: " << score << endl;
    }
};

int main() {
    int userRating = 85;
    int popularity = 60;

    // Runtime polymorphism via base class pointer
    Recommender* engine = nullptr;

    PersonalizedRecommender pRec;
    TrendingRecommender tRec;

    engine = &pRec;
    engine->generateRecommendation(userRating, popularity);

    engine = &tRec;
    engine->generateRecommendation(userRating, popularity);

    return 0;
}
