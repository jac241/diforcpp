#ifndef __USER_REPOSITORY_INCLUDED__
#define __USER_REPOSITORY_INCLUDED__

#include <unordered_map>
#include <vector>
#include "user.hpp"

class UserRepository {

  std::unordered_map<std::string, User> users_by_email;

public:
  UserRepository();
  void add(User user);
  std::vector<User> findAll();
  const User findByEmail(const std::string email);
};

#endif
