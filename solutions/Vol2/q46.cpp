#include <iostream>
#include <cstring>
#include <cstdlib> // For malloc and free
using namespace std;

struct Packet {
    unsigned short id;   // 2 bytes
    unsigned short len;  // 2 bytes
    unsigned char data[]; // Flexible array member
};

int main() {
    unsigned short id;
    cout << "Enter the id: ";
    cin >> id;

    string value;
    cout << "Enter the string: ";
    cin >> value;

    unsigned short len = value.length();

    // 1. Allocate memory for header (4 bytes) + data length + 1 extra byte for null terminator
    Packet* packet = static_cast<Packet*>(malloc(sizeof(Packet) + len + 1));

    packet->id = id;
    packet->len = len;

    // 2. Use value.c_str() to get the pointer to actual text characters
    memcpy(packet->data, value.c_str(), len);
    packet->data[len] = '\0'; // Explicitly null-terminate for safe printing

    // 3. Display packet
    cout << "ID: " << packet->id << endl;
    cout << "Length: " << packet->len << endl;
    cout << "Data: " << packet->data << endl;

    free(packet); // Free malloc'd memory
    return 0;
}