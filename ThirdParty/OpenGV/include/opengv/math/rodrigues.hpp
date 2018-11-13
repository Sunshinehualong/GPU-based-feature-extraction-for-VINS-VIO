/******************************************************************************
* Author:   Steffen Urban                                                    *
* Contact:  urbste@googlemail.com                                            *
* License:  Copyright (c) 2016 Steffen Urban, ANU. All rights reserved.      *
*                                                                            *
* Redistribution and use in source and binary forms, with or without         *
* modification, are permitted provided that the following conditions         *
* are met:                                                                   *
* * Redistributions of source code must retain the above copyright           *
*   notice, this list of conditions and the following disclaimer.            *
* * Redistributions in binary form must reproduce the above copyright        *
*   notice, this list of conditions and the following disclaimer in the      *
*   documentation and/or other materials provided with the distribution.     *
* * Neither the name of ANU nor the names of its contributors may be         *
*   used to endorse or promote products derived from this software without   *
*   specific prior written permission.                                       *
*                                                                            *
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"*
* AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE  *
* IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE *
* ARE DISCLAIMED. IN NO EVENT SHALL ANU OR THE CONTRIBUTORS BE LIABLE        *
* FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL *
* DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR *
* SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER *
* CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT         *
* LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY  *
* OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF     *
* SUCH DAMAGE.                                                               *
******************************************************************************/
//29.06.2016 Steffen Urban

/**
* \file rodrigues.hpp
* \brief Functions for back-and-forth transformation between rotation matrices
*        and Rodrigues-parameters.
*/

#ifndef OPENGV_RODRIGUES_HPP_
#define OPENGV_RODRIGUES_HPP_

#include <stdlib.h>
#include <opengv/types.hpp>

/**
* \brief The namespace of this library.
*/
namespace opengv
{
/**
* \brief The namespace of the math tools.
*/
namespace math
{

/**
* \brief Compute a rotation matrix from Rodrigues axis angle.
*
* \param[in] omega The Rodrigues-parameters of a rotation.
* \return The 3x3 rotation matrix.
*/
rotation_t rodrigues2rot(const rodrigues_t & omega);

/**
* \brief Compute the Rodrigues-parameters of a rotation matrix.
*
* \param[in] R The 3x3 rotation matrix.
* \return The Rodrigues-parameters.
*/
rodrigues_t rot2rodrigues(const rotation_t & R);

}
}

#endif /* OPENGV_RODRIGUES_HPP_ */
