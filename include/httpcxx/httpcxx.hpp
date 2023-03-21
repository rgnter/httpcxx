//
// Created by maros on 21.3.2023.
//

#ifndef HTTPCXX_HTTPCXX_HPP
#define HTTPCXX_HTTPCXX_HPP

#include <string>
#include <vector>
#include <charconv>

namespace httpcxx {

  using status_code = int;

  class status {
  public:
    const status_code status;
  };

  /**
   * HTTP header key type.
   */
  using header_key = std::string;

  /**
   * HTTP header key value.
   */
  using header_val = std::string;

  /**
   * HTTP header.
   */
  class header {
  public:
    const header_key key;
    const header_val value;
  };

  /**
   * Array of HTTP headers.
   */
  using header_array = std::vector<httpcxx::header>;

  /**
   * HTTP request.
   */
  class request {
  public:
    const httpcxx::header_array headers;
  };

  /**
   * HTTP response.
   */
  class response {
  public:
    const httpcxx::header_array headers;
  };



  namespace headers {
      constexpr header host {}
  };

} // namespace httpcxx

#endif // HTTPCXX_HTTPCXX_HPP
