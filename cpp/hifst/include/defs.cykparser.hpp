// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use these files except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Copyright 2012 - Gonzalo Iglesias, Adrià de Gispert, William Byrne

#ifndef CYKDEFS_HPP
#define CYKDEFS_HPP

namespace ucam {
namespace hifst {
/**
 * \file
 * \brief Contains definitions for cykparser data and task
 * \date 16-8-2012
 * \author Gonzalo Iglesias
 */

typedef std::basic_string<uint> cykparser_sentence_t;
typedef std::basic_string<uint> cykparser_rulebpcoordinates_t;
typedef std::vector< cykparser_rulebpcoordinates_t  >
cykparser_ruledependencies_t;

}
} // end namespaces
#endif
