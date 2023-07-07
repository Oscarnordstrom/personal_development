#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::shared_ptr;

struct destination {
  std::string url;

  destination(std::string url_str) { this->url = url_str; }
  destination() { this->url = "null"; };
};

struct connection {
  bool is_successful;
  destination connection_destination;
  connection(destination &dest) {
    this->connection_destination = dest;
    this->is_successful = true;
  };

  connection(std::string dest_url) {
    destination dest(dest_url);
    this->connection_destination = dest;
    this->is_successful = true;
  };
};

std::shared_ptr<connection> start_connection(std::string url) {
  destination dest(url);
  std::shared_ptr<connection> con_ptr = std::make_shared<connection>(dest);
  return con_ptr;
}
void disconnect(connection con) {
  cout << "Exiting connection with url: " << con.connection_destination.url
       << endl;
}

void end_connection(connection *p) {
  disconnect(*p);
  delete p;
}

int main() {
  connection *c = new connection("google.com");
  shared_ptr<connection> p(c, [](connection *ptr) {
    cout << "deleting pointer" << endl;
    delete ptr;
  });

  return 0;
}