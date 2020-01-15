/* ===========================================================================
 *
 *                            PUBLIC DOMAIN NOTICE
 *               National Center for Biotechnology Information
 *
 *  This software/database is a "United States Government Work" under the
 *  terms of the United States Copyright Act.  It was written as part of
 *  the author's official duties as a United States Government employee and
 *  thus cannot be copyrighted.  This software/database is freely available
 *  to the public for use. The National Library of Medicine and the U.S.
 *  Government have not placed any restriction on its use or reproduction.
 *
 *  Although all reasonable efforts have been taken to ensure the accuracy
 *  and reliability of the software and data, the NLM and the U.S.
 *  Government do not and cannot warrant the performance or results that
 *  may be obtained by using this software or data. The NLM and the U.S.
 *  Government disclaim all warranties, express or implied, including
 *  warranties of performance, merchantability or fitness for any particular
 *  purpose.
 *
 *  Please cite the author in any work or product based on this material.
 *
 * ===========================================================================
 *
 * Project:
 *  sratools command line tool
 *
 * Purpose:
 *  drive fastq-dump
 *
 */

#pragma once
#include "parse_args.hpp"

namespace sratools {

// these are shared between the main processing code and the fastq-dump processing code
extern void processAccessions [[noreturn]] (  std::string const &toolname
                                            , std::string const &toolpath
                                            , char const *const unsafeOutputFileParamName
                                            , char const *const extension
                                            , ParamList &parameters
                                            , ArgsList const &accessions
                                            );
extern void toolHelp [[noreturn]] (std::string const &toolpath);
extern void toolVersion [[noreturn]] (std::string const &toolpath);
extern void emptyInvocation [[noreturn]] (std::string const &toolpath);

void running_as_fastq_dump [[noreturn]] ();

} // namespace sratools
