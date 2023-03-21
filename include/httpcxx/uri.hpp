//
// Created by maros on 21.3.2023.
//

#ifndef HTTPCXX_URI_HPP
#define HTTPCXX_URI_HPP

#include <string>

namespace httpcxx {
  class uri {
  private:
    const std::string scheme;
    const std::string user;
    const std::string host;
    const std::string port;
    const std::string path;
    const std::string query;
    const std::string fragment;
  };
}

#endif // HTTPCXX_URI_HPP
