The ifstream class is derived from the istream class, allowing objects of type ifstream to be used as if they were istream objects. When the read function has a parameter of type istream&, the automatic derived-to-base conversion applies, allowing us to pass a derived type ifstream to that function. Inside the read function, we can access the istream subpart of the ifstream object through the reference.