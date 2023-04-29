int main() {
  const int v2 = 0;                               // Top level const
  int v1 = v2;                                    // Not a const
  int *p1 = &v1, &r1 = v1;                        // Not a const
  const int *p2 = &v2, *const p3 = &v2, &r2 = v2; // p2 is not low level.
  // p3 is both a low level and high level const pointer, as is r2.
}