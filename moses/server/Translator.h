// -*- c++ -*-
#pragma once
#include "MosesServer.h"

namespace Moses
{
  class 
  MosesServer::
  Translator : public xmlrpc_c::method
  {
  public:
    Translator(size_t numThreads = 10);
    
    void execute(xmlrpc_c::paramList const& paramList,
		 xmlrpc_c::value *   const  retvalP);
  private:
    Moses::ThreadPool m_threadPool;
  };
  
}
