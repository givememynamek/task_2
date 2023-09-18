#include <iostream>
using namespace std;
class FooString {
  char *buf;

  public:
  FooString(char* tbuf) {
		buf = tbuf;
	}
	~FooString(){
		delete(buf);
	}
	void Show() {
    	cout << buf << endl;
    }
	char* GetString() {
    	return buf;
	}

  int length(char* buf) {
	int len = 0;
	while (buf[len] != '\0')
		len++;
	return len;
}
};
