
struct Player {
    int score;
    string name;
};

class Checker{
public:
  	// complete this method
    static int comparator(Player a1, Player a2)  {
        if (a1.score < a2.score) {
            return -1;
        } 
        else if (a1.score > a2.score) {
            return  1;
         } 
        else {
            return a1.name.compare(a2.name);
        }
    }
};
2
