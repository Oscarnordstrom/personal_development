int main() {
  int a = 3, b = 4;
  decltype(a) c = a;     // c will have type int
  decltype(a = b) d = a; // d will have type &int
}
