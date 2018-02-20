#include "stdafx.h"
#include <iostream>
#include <boost/shared_ptr.hpp>
#include <boost/asio.hpp>
#include <boost/asio/placeholders.hpp>
#include <boost/system/error_code.hpp>
#include <boost/bind/bind.hpp>

#include "TcpServerSocket.hpp"

using namespace boost::asio;
using namespace std;

int main()
{
	try
	{
		typedef boost::asio::io_service IoService;
		IoService ios;
		sckcpp::tcp::ServerSocket soc(ios);
		soc.bind(5556);
		cout << "Client start." << endl;
    }
 return 0;
 }
