// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file Point.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _FAST_DDS_GENERATED_GEOMETRY_MSGS_MSG_POINT_H_
#define _FAST_DDS_GENERATED_GEOMETRY_MSGS_MSG_POINT_H_

#include <fastrtps/utils/fixed_size_string.hpp>

#include <stdint.h>
#include <array>
#include <string>
#include <vector>
#include <map>
#include <bitset>

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#define eProsima_user_DllExport __declspec( dllexport )
#else
#define eProsima_user_DllExport
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define eProsima_user_DllExport
#endif  // _WIN32

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#if defined(Point_SOURCE)
#define Point_DllAPI __declspec( dllexport )
#else
#define Point_DllAPI __declspec( dllimport )
#endif // Point_SOURCE
#else
#define Point_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define Point_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
} // namespace fastcdr
} // namespace eprosima

namespace geometry_msgs {
    namespace msg {
        /*!
         * @brief This class represents the structure Point defined by the user in the IDL file.
         * @ingroup POINT
         */
        class Point
        {
        public:

            /*!
             * @brief Default constructor.
             */
            eProsima_user_DllExport Point();

            /*!
             * @brief Default destructor.
             */
            eProsima_user_DllExport ~Point();

            /*!
             * @brief Copy constructor.
             * @param x Reference to the object geometry_msgs::msg::Point that will be copied.
             */
            eProsima_user_DllExport Point(
                    const Point& x);

            /*!
             * @brief Move constructor.
             * @param x Reference to the object geometry_msgs::msg::Point that will be copied.
             */
            eProsima_user_DllExport Point(
                    Point&& x) noexcept;

            /*!
             * @brief Copy assignment.
             * @param x Reference to the object geometry_msgs::msg::Point that will be copied.
             */
            eProsima_user_DllExport Point& operator =(
                    const Point& x);

            /*!
             * @brief Move assignment.
             * @param x Reference to the object geometry_msgs::msg::Point that will be copied.
             */
            eProsima_user_DllExport Point& operator =(
                    Point&& x) noexcept;

            /*!
             * @brief Comparison operator.
             * @param x geometry_msgs::msg::Point object to compare.
             */
            eProsima_user_DllExport bool operator ==(
                    const Point& x) const;

            /*!
             * @brief Comparison operator.
             * @param x geometry_msgs::msg::Point object to compare.
             */
            eProsima_user_DllExport bool operator !=(
                    const Point& x) const;

            /*!
             * @brief This function sets a value in member x
             * @param _x New value for member x
             */
            eProsima_user_DllExport void x(
                    double _x);

            /*!
             * @brief This function returns the value of member x
             * @return Value of member x
             */
            eProsima_user_DllExport double x() const;

            /*!
             * @brief This function returns a reference to member x
             * @return Reference to member x
             */
            eProsima_user_DllExport double& x();

            /*!
             * @brief This function sets a value in member y
             * @param _y New value for member y
             */
            eProsima_user_DllExport void y(
                    double _y);

            /*!
             * @brief This function returns the value of member y
             * @return Value of member y
             */
            eProsima_user_DllExport double y() const;

            /*!
             * @brief This function returns a reference to member y
             * @return Reference to member y
             */
            eProsima_user_DllExport double& y();

            /*!
             * @brief This function sets a value in member z
             * @param _z New value for member z
             */
            eProsima_user_DllExport void z(
                    double _z);

            /*!
             * @brief This function returns the value of member z
             * @return Value of member z
             */
            eProsima_user_DllExport double z() const;

            /*!
             * @brief This function returns a reference to member z
             * @return Reference to member z
             */
            eProsima_user_DllExport double& z();

            /*!
            * @brief This function returns the maximum serialized size of an object
            * depending on the buffer alignment.
            * @param current_alignment Buffer alignment.
            * @return Maximum serialized size.
            */
            eProsima_user_DllExport static size_t getMaxCdrSerializedSize(
                    size_t current_alignment = 0);

            /*!
             * @brief This function returns the serialized size of a data depending on the buffer alignment.
             * @param data Data which is calculated its serialized size.
             * @param current_alignment Buffer alignment.
             * @return Serialized size.
             */
            eProsima_user_DllExport static size_t getCdrSerializedSize(
                    const geometry_msgs::msg::Point& data,
                    size_t current_alignment = 0);

            /*!
             * @brief This function serializes an object using CDR serialization.
             * @param cdr CDR serialization object.
             */
            eProsima_user_DllExport void serialize(
                    eprosima::fastcdr::Cdr& cdr) const;

            /*!
             * @brief This function deserializes an object using CDR serialization.
             * @param cdr CDR serialization object.
             */
            eProsima_user_DllExport void deserialize(
                    eprosima::fastcdr::Cdr& cdr);

            /*!
             * @brief This function returns the maximum serialized size of the Key of an object
             * depending on the buffer alignment.
             * @param current_alignment Buffer alignment.
             * @return Maximum serialized size.
             */
            eProsima_user_DllExport static size_t getKeyMaxCdrSerializedSize(
                    size_t current_alignment = 0);

            /*!
             * @brief This function tells you if the Key has been defined for this type
             */
            eProsima_user_DllExport static bool isKeyDefined();

            /*!
             * @brief This function serializes the key members of an object using CDR serialization.
             * @param cdr CDR serialization object.
             */
            eProsima_user_DllExport void serializeKey(
                    eprosima::fastcdr::Cdr& cdr) const;

        private:
            double m_x;
            double m_y;
            double m_z;
        };
    } // namespace msg
} // namespace geometry_msgs

#endif // _FAST_DDS_GENERATED_GEOMETRY_MSGS_MSG_POINT_H_