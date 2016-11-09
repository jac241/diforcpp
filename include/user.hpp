#ifndef __USER_HPP_INCLUDED__
#define __USER_HPP_INCLUDED__

#include <string>

class User {
  std::string email;

public:
  User(std::string email);
  std::string get_email();
};

#endif
