/*   Aegir Styra 5.0 Ship Simulator
     Copyright (C) 2014 James Packer

     This program is free software; you can redistribute it and/or modify
     it under the terms of the GNU General Public License version 2 as
     published by the Free Software Foundation

     This program is distributed in the hope that it will be useful,
     but WITHOUT ANY WARRANTY; without even the implied warranty of
     MERCHANTABILITY Or FITNESS For A PARTICULAR PURPOSE.  See the
     GNU General Public License For more details.

     You should have received a copy of the GNU General Public License along
     with this program; if not, write to the Free Software Foundation, Inc.,
     51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA. */

#include "ExitMessage.hpp"
#include <iostream>

#ifdef __WIN32
#include <windows.h>
#endif // __WIN32

namespace ExitMessage {

    void exitWithMessage(const std::string& message) {

        #ifdef __WIN32
        int msgboxID = MessageBox(NULL, message.c_str(), (LPCSTR)"Error", MB_ICONERROR);
        #else
        std::cerr << "Error: " << message << std::endl;
        #endif // __WIN32

        exit(EXIT_FAILURE);
    }

}



