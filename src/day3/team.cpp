#include <iostream>
#include <string>

// Enum is a special type that can only have
// pre-defined specific values.
enum class Position {
    PG,
    SG,
    SF,
    PF,
    C
};

struct Player {
    std::string name;
    int age;
    Position pos;
};

struct Manager {
    std::string name;
    int age;
};

struct Team {
    Manager manager;
    Player players[6];
};

// Helper function. This will take a Position and return
// a string representing the position.
std::string print_position(Position pos)
{   
    std::string result;

    switch (pos) {
    case Position::PG:
        result = "Point guard";
        break;
    case Position::SG:
        result = "Shooting guard";
        break;
    case Position::SF:
        result = "Small forward";
        break;
    case Position::PF:
        result = "Power forward";
        break;
    case Position::C:
        result = "Center";
        break;

    }

    return result;
}

int main()
{
    // This is a helper code that will print summary of a palyer.
    Player p = { "James", 33, Position::PG };

    // You can use `print_position` function that will format
    // your player's position into a string.
    std::cout << p.name << ", "
              << print_position(p.pos) << ", "
              << p.age << "\n";

    // TODO: Declare your own team with a manager and players
    // and print summary of your team.
    // Hint: You may use for-loop over an integer `i` and access each
    // player using `team.players[i]`
    Team team;

    return 0;
}

