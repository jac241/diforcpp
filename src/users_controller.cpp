#include <iostream>

#include "users_controller.hpp"

#include "show_user_cli_view.hpp"
#include "user.hpp"


UsersController::UsersController(UserRepository &user_repository) :
  user_repository(user_repository) {

}

void UsersController::show(const std::string email) {
  auto user = user_repository.findByEmail(email);
  ShowUserCliView view{ "A title", user };

  view.update();
}

void UsersController::create() {
  std::string email;
  std::string username;

  std::cout << "Create a new user!" << std::endl;
  std::cout << "Enter your email: ";
  std::cin >> email;

  std::cout << "Enter your username: ";
  std::cin >> username;

  user_repository.add(User{email});
}

void UsersController::index() {
  std::cout << "Index of Users" << std::endl;

  for(auto &user : user_repository.findAll()) {
    ShowUserCliView view{ "A Title", user };
    view.update();
  }
}
