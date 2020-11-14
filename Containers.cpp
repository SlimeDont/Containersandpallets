#include <iostream>

    class Container {
        protected:
            int width, height, length;
        public:
            Container(int w, int h, int l) {
            width = w;
            height = h;
            length = l;
        }
        int calc() {
            return width*length;
        }
    };

int main() {
Container T20DC(235, 237, 590);
Container T20FT(220, 220, 560);

std::string getTypes;
int getSize, store;
std::cout << "Container types: 20DC, 20flatTrack." << std::endl;
std::cin >> getTypes;
std::cout << "Please enter your pallet size. Ex: 110" << std::endl;
std::cin >> getSize;
std::cout << "Number of pallet you can put:" << std::endl;

    if(getTypes == "20DC") {
        store = T20DC.calc();
        std::cout << store / (getSize*getSize);
    }
    else {
        store = T20FT.calc();
        std::cout << store / (getSize*getSize);
    }
    
}
