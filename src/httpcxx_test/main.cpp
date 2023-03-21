//
// Created by maros on 21.3.2023.
//

#include <string>
#include <chrono>
#include <boost/asio.hpp>
#include <boost/beast.hpp>
#include <boost/beast/ssl.hpp>

/*
class test_handler : httpcxx::handler {
public:
  test_handler() : endpoint_path("/test_explicit_json"),
                   authorization_type(httpcxx::auth::bearer),
                   content_type(httpcxx::mime::json) {}

public:
  httpcxx::response<response> handle(httpcxx::request<request> request)
  {
    auto json = request.body<nlohmann::json>();
  }
};


int main()
{
  httpcxx::server server;
  server.endpoint(test_handler())
      .endpoint("/test2", [](auto request) -> httpcxx::response {
        if(request.content_type() != httpcxx::mime::json)
          return httpcxx::response().status(httpcxx::code::invalid_request);
        return httpcxx::response().status(httpcxx::code::ok);
      })
      .endpoint("/test3", httpcxx::server::endpoint::not_found)
}

 */


namespace asio = boost::asio;
namespace beast = boost::beast;

int main()
{

  asio::io_context ctx;
  asio::ssl::context ssl_ctx {
      asio::ssl::context::tlsv13
  };

  beast::http::string_body


}
