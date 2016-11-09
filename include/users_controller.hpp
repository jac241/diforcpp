#ifndef __USERS_CONTROLLER_HPP_INCLUDED__
#define __USERS_CONTROLLER_HPP_INCLUDED__

#include "user_repository.hpp"

class UsersController {
  UserRepository &user_repository;
public:
  UsersController(UserRepository &user_repository);
  void create();
  void show(const std::string email);
  void index();
};

#endif
