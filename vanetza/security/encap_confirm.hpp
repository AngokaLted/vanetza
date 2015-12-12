#ifndef ENCAP_CONFIRM_HPP
#define ENCAP_CONFIRM_HPP

#include <vanetza/geonet/extended_pdu.hpp>
#include <vanetza/geonet/header_variant.hpp>
#include <vanetza/common/byte_buffer.hpp>

namespace vanetza
{
namespace security
{

/** \brief contains output of the signing process
* described in
* TS 102 636-4-1 v1.2.3 (2015-01)
*/
struct EncapConfirm {
    SecuredMessage sec_packet; // mandatory
};

} // namespace security
} // namespace vanetza
#endif // ENCAP_CONFIRM_HPP
