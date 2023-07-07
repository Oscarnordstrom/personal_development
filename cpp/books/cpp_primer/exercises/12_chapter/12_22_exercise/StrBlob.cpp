#include <vector>
#include <string>

class StrBlob {
public:
  StrBlob(std::vector<std::string> &input_vec)
      : data(std::make_shared<std::vector<std::string>>(input_vec)) {}
  StrBlobPtr begin();
  StrBlobPtr end();

private:
  friend class StrBlobPtr;

  std::shared_ptr<std::vector<std::string>> data;
};