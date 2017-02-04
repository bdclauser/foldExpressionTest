#include <iostream>

using namespace std;


bool allVar() {
	return true;
}

template<typename T, typename ... Ts>
bool allVAr(T t, TS ... ts) {
	return t && allVar(ts...);
}

template<typename... Args>
bool all(Args... args) { return (... && args); }

int main() {

	cout << boolalpha;

	cout << "allVar(): " << allVar() << endl;
	cout << "all(): " << all() << endl;

	cout << "allVar(true): " << allVar(true) << endl;
	cout << "all(true): " << all(true) << endl;

	cout << "allVar(true, true, true, false): " << allVar(true, true, true, false) << endl;
	cout << "all(true, true, true, false): " << all(true, true, true, false) << endl;


}