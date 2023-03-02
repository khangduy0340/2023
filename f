checking for files...

Checking interface design .....


Testing/Referee.cpp: In member function ‘Player* Referee::refGame(Player*, Player*)’:
Testing/Referee.cpp:10:14: warning: unused variable ‘p2’ [-Wunused-variable]
   10 |         char p2 = player2->makeMove();
      |              ^~
Testing/main.cpp: In function ‘int main()’:
Testing/main.cpp:16:9: error: no matching function for call to ‘Human::Human()’
   16 |   Human human;
      |         ^~~~~
In file included from Testing/main.cpp:1:
Testing/Human.h:8:5: note: candidate: ‘Human::Human(std::string)’
    8 |     Human(string name1);
      |     ^~~~~
Testing/Human.h:8:5: note:   candidate expects 1 argument, 0 provided
Testing/Human.h:6:7: note: candidate: ‘Human::Human(const Human&)’
    6 | class Human:public Player {
      |       ^~~~~
Testing/Human.h:6:7: note:   candidate expects 1 argument, 0 provided
Testing/Human.h:6:7: note: candidate: ‘Human::Human(Human&&)’
Testing/Human.h:6:7: note:   candidate expects 1 argument, 0 provided
Testing/main.cpp:28:21: warning: comparison of integer expressions of different signedness: ‘int’ and ‘std::vector<std::__cxx11::basic_string<char> >::size_type’ {aka ‘long unsigned int’} [-Wsign-compare]
   28 |   for (int i = 0; i < results.size(); i++) {