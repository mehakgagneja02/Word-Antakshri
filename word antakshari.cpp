#include<iostream>
#include<cstdlib>
#include<fstream>
#include <ctime>

using namespace std;
string dict[85000];
string word1;
  string a = "a";
  string comp_word = " ";
  string player_word = " ";
  string myword = "a";

int computer_score = 0;
int user_score = 0;
string computer(int alphabet = 97) {
  srand(time(NULL));
  string word;
  if (alphabet == 97 || alphabet == 65) {
    int m = rand() % (5105 - 1 + 1) + 1;
    word = dict[m];

  } else if (alphabet == 98| alphabet == 66){
    int m = rand() % (9939 - 5106 + 1) + 5106;
    word = dict[m];

  } else if (alphabet == 99 || alphabet == 67) {
    int m = rand() % (18033 - 9940 + 1) + 9940;
    word = dict[m];

  } else if (alphabet == 100 || alphabet == 68) {
    int m = rand() % (23619 - 18034 + 1) + 18034;
    word = dict[m];

  } else if (alphabet == 101 || alphabet == 69) {
    int m = rand() % (27229 - 23620 + 1) + 23620;
    word = dict[m];

  } else if (alphabet == 102 || alphabet == 70) {
    int m = rand() % (30784 - 27230 + 1) + 27230;
    word = dict[m];

  } else if (alphabet == 103 || alphabet == 71) {
    int m = rand() % (33461 - 30785 + 1) + 30785;
    word = dict[m];

  } else if (alphabet == 104 || alphabet == 72) {
    int m = rand() % (36477 - 33462 + 1) + 33462;
    word = dict[m];

  } else if (alphabet == 105 || alphabet == 73) {
    int m = rand() % (39999 - 36478 + 1) + 36478;
    word = dict[m];

  } else if (alphabet == 106 || alphabet == 74) {
    int m = rand() % (40806 - 40000 + 1) + 40000;
    word = dict[m];

  } else if (alphabet == 107 || alphabet == 75) {
    int m = rand() % (41504 - 40807 + 1) + 40807;
    word = dict[m];

  } else if (alphabet == 108 || alphabet == 76) {
    int m = rand() % (44026 - 41505 + 1) + 41505;
    word = dict[m];

  } else if (alphabet == 109 || alphabet == 77) {
    int m = rand() % (48680 - 44027 + 1) + 44027;
    word = dict[m];

  } else if (alphabet == 110 || alphabet == 78) {
    int m = rand() % (50161 - 48681 + 1) + 48681;
    word = dict[m];

  } else if (alphabet == 111 || alphabet == 79) {
    int m = rand() % (52385 - 50162 + 1) + 50162;
    word = dict[m];

  } else if (alphabet == 112 || alphabet == 80) {
    int m = rand() % (58937 - 52386 + 1) + 52386;
    word = dict[m];

  } else if (alphabet == 113 || alphabet == 81) {
    int m = rand() % (59385 - 58938 + 1) + 58938;
    word = dict[m];

  } else if (alphabet == 114 || alphabet == 82) {
    int m = rand() % (64277 - 59386 + 1) + 59386;
    word = dict[m];

  } else if (alphabet == 115 || alphabet == 83) {
    int m = rand() % (73432 - 64278 + 1) + 64278;
    word = dict[m];

  } else if (alphabet == 116 || alphabet == 84) {
    int m = rand() % (77640 - 73433 + 1) + 73433;
    word = dict[m];

  } else if (alphabet == 117 || alphabet == 85) {
    int m = rand() % (80312 - 77641 + 1) + 77641;
    word = dict[m];

  } else if (alphabet == 118 || alphabet == 86) {
    int m = rand() % (81684 - 80313 + 1) + 80313;
    word = dict[m];

  } else if (alphabet == 119 || alphabet == 87) {
    int m = rand() % (83648 - 81685 + 1) + 81685;
    word = dict[m];

  } else if (alphabet == 120 || alphabet == 88) {
    int m = rand() % (83695 - 83649 + 1) + 83649;
    word = dict[m];

  } else if (alphabet == 121 || alphabet == 89) {
    int m = rand() % (83927 - 83696 + 1) + 83696;
    word = dict[m];

  } else if (alphabet == 122 || alphabet == 90) {
    int m = rand() % (83999 - 839278 + 1) + 83928;
    word = dict[m];

  }
  return word;
}
int comp_score(string myword) {
  int calculatecomputer = 0;
  int m = 0;
  for (m = 0; m < myword.length(); m++) {
    if (myword[m] == 97 || myword[m] == 101 || myword[m] == 105 ||
      myword[m] == 111 || myword[m] == 117 || myword[m] == 65 ||
      myword[m] == 69 || myword[m] == 73 || myword[m] == 79 ||
      myword[m] == 85) {} else if ((myword[m] >= 97 && myword[m] <= 122) || (myword[m] >= 65 && myword[m] <= 90)) {
      ++calculatecomputer;
    }
  }
  computer_score = computer_score + calculatecomputer;
  return computer_score;
}
int player_score(string myword) {
  int calculateuser = 0;
  int m = 0;
  for (m = 0; m < myword.length(); m++) {
    if (myword[m] == 97 || myword[m] == 101 || myword[m] == 105 ||
      myword[m] == 111 || myword[m] == 117 || myword[m] == 65 ||
      myword[m] == 69 || myword[m] == 73 || myword[m] == 79 ||
      myword[m] == 85) {} else if ((myword[m] >= 97 && myword[m] <= 122) || (myword[m] >= 65 && myword[m] <= 90)) {
      ++calculateuser;
    }
  }
  user_score = user_score + calculateuser;
  return user_score;
}
int main() {

  fstream f;
  int m = 0;
  string word;
  f.open("engmix.txt");
  while (f >> word) {
    dict[m] = word;
    m++;
  }
  
  cout<<"**********Word Antakshari***********";
  while (1) {
  	if(computer_score>=100)
  	{ cout<<"\n\nCOMPUTER WINS";
  	break;
	  }
	  else if(user_score>=100)
  	{ cout<<"\n\nUser WINS";
  	break;
	  }
	  
    myword = computer(97);

    cout << "\n Computer's word : " << myword;
    cout << "\n Computer's score : " << comp_score(myword);
    for (m = 0; m < myword.length(); m++) {
      if (m == myword.length() - 1) {
        comp_word = myword[m];
      }
    }

    cout << "\n User's word : ";
    cin >> word1;
    for (m = 0; m < word1.length(); m++) {
      if (m == 0) {
        player_word = word1[m];
      }
    }
    if (player_word == comp_word) {
      cout << "\n User's score : " << player_score(word1);
      for (m = 0; m < word1.length(); m++) {
        if (m == word1.length() - 1) {
          a = word1[m];
        }

      }
    } else {
      cout << "\n Enter correct word";
      cout << "\n User's word : ";
      cin >> word1;
      cout << "\n User's score : " << player_score(word1);
      for (m = 0; m < word1.length(); m++) {
        if (m == 0) {
          player_word = word1[m];
        }
      }
    }

  }
  return 0;
}
