#include <iostream>
#include <windows.h>
#include <ctime>
#include <conio.h>

using namespace std;
enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN };
eDirection dir;

bool gameOver;
const int width = 20;
const int height = 20;
int x, y, fruitX, fruitY;
int score;
int speed = 500;
char corm;
int tailX[100], tailY[100];
int nTail = 0;

void start();
void map();
void objects();
void moving();

int main() {
    system("color 07");
    char answer;
    cout << "Want to play? (Y/N):";
    cin >> answer;
    if (answer == 'Y' || answer == 'y') {
        system("color 70");
        start();
        while (!gameOver) {
            map();
            objects();
            moving();
            if (gameOver)
                main();
        }
    }
    else if (answer == 'N' || answer == 'n') {
        system("cls");
    }
    else {
        system("cls");
        cout << "Ooooops....Something went wrong " << endl;
        main();
    } 
    return 0;
}

void start() {
    srand(time(NULL));
    gameOver = false;
    x = width / 2 - 1;
    y = height / 2 - 1;
    fruitX = rand() % width;
    fruitY = rand() % height;
    score = 0;
}

void map() {
    Sleep(speed);
    system("cls");
    for (int i = 0; i < width + 1; i++)
        cout << "#";cout << endl;
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (j == 0 || j == width - 1) {
                cout << "#";
            }
            if (i == y && j == x) {
                cout << "O";
            }
            else if (i == fruitY && j == fruitX) {
                corm = rand() % 2 + 1;
                cout << corm;
            }
            else {
                bool print = false;
                for (int k = 0; k < nTail; k++) {
                    if (tailX[k] == j && tailY[k] == i) {
                        print = true;
                        cout << "o";
                    }
                }
                if (!print)
                    cout << " ";
            }
        }
        cout << endl;
    }
    for (int i = 0; i < width + 1; i++)
        cout << "#";
    cout << endl;
    cout << "Score: " << score << endl;
}

void objects() {
    if (_kbhit()) {
        switch (_getch()) {
        case 'a': dir = LEFT; break;
        case 'd': dir = RIGHT; break;
        case 'w':  dir = UP; break;
        case 's':dir = DOWN; break;
        case 'x': gameOver = true;
        }
    }

}

void moving() {
    int prevX = tailX[0];
    int prevY = tailY[0];
    int prev2x, prev2y;

    tailX[0] = x;
    tailY[0] = y;

    for (int i = 1; i < nTail; i++) {
        prev2x = tailX[i];
        prev2y = tailY[i];
        tailX[i] = prevX;
        tailY[i] = prevY;
        prevX = prev2x;
        prevY = prev2y;
    }
    switch (dir) {
    case LEFT:
        x--;
        break;
    case RIGHT:
        x++;
        break;
    case UP:
        y--;
        break;
    case DOWN:
        y++;
        break;
    }
    if (x >= width - 1)
        x = 0;
    else if (x < 0)
        x = width - 2;
    if (y >= height)
        y = 0;
    else if (y < 0)
        y = height - 1;
    for (int i = 0; i < nTail; i++) {
        if (tailX[i] == x && tailY[i] == y) {
            gameOver = true;
        }
    }
    if (x == fruitX && y == fruitY) {
        nTail++;
        srand(time(NULL));
        score += 1 + (rand() % 5);
        fruitX = rand() % width - 1;
        fruitY = rand() % height;
        speed -= 50;
        cout << "\a";
    }
    if (speed <= 100)
        speed = 100;
}
