#include "user.hpp"

User::User(std::string email) : email(email) {

}

std::string User::get_email() {
  return email;
}
