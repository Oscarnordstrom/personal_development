#include <iostream>
#include <map>
using std::cout;
using std::endl;

int main() {

  std::map<int, int> m = {{
                              1,
                              10,
                          },
                          {2, 11},
                          {3, 12},
                          {4, 13}};

  auto m_iter = m.begin();

  while (m_iter != m.end()) {
    cout << "key " << m_iter->first << " " << m_iter->second++ << "->";
    cout << m_iter->second << endl;
    m_iter++;
  }

  return 0;
}
