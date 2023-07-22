/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/annotations/resource.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef ENVOY_ANNOTATIONS_RESOURCE_PROTO_UPB_H_
#define ENVOY_ANNOTATIONS_RESOURCE_PROTO_UPB_H_

#include "upb/msg_internal.h"
#include "upb/decode.h"
#include "upb/decode_fast.h"
#include "upb/encode.h"

#include "upb/port_def.inc"

#ifdef __cplusplus
extern "C" {
#endif

struct envoy_annotations_ResourceAnnotation;
typedef struct envoy_annotations_ResourceAnnotation envoy_annotations_ResourceAnnotation;
extern const upb_msglayout envoy_annotations_ResourceAnnotation_msginit;
extern const upb_msglayout_ext envoy_annotations_resource_ext;
struct google_protobuf_ServiceOptions;
extern const upb_msglayout google_protobuf_ServiceOptions_msginit;


/* envoy.annotations.ResourceAnnotation */

UPB_INLINE envoy_annotations_ResourceAnnotation *envoy_annotations_ResourceAnnotation_new(upb_arena *arena) {
  return (envoy_annotations_ResourceAnnotation *)_upb_msg_new(&envoy_annotations_ResourceAnnotation_msginit, arena);
}
UPB_INLINE envoy_annotations_ResourceAnnotation *envoy_annotations_ResourceAnnotation_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_annotations_ResourceAnnotation *ret = envoy_annotations_ResourceAnnotation_new(arena);
  if (!ret) return NULL;
  if (!upb_decode(buf, size, ret, &envoy_annotations_ResourceAnnotation_msginit, arena)) return NULL;
  return ret;
}
UPB_INLINE envoy_annotations_ResourceAnnotation *envoy_annotations_ResourceAnnotation_parse_ex(const char *buf, size_t size,
                           const upb_extreg *extreg, int options,
                           upb_arena *arena) {
  envoy_annotations_ResourceAnnotation *ret = envoy_annotations_ResourceAnnotation_new(arena);
  if (!ret) return NULL;
  if (!_upb_decode(buf, size, ret, &envoy_annotations_ResourceAnnotation_msginit, extreg, options, arena)) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char *envoy_annotations_ResourceAnnotation_serialize(const envoy_annotations_ResourceAnnotation *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_annotations_ResourceAnnotation_msginit, arena, len);
}

UPB_INLINE upb_strview envoy_annotations_ResourceAnnotation_type(const envoy_annotations_ResourceAnnotation *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(0, 0), upb_strview); }

UPB_INLINE void envoy_annotations_ResourceAnnotation_set_type(envoy_annotations_ResourceAnnotation *msg, upb_strview value) {
  *UPB_PTR_AT(msg, UPB_SIZE(0, 0), upb_strview) = value;
}

UPB_INLINE bool envoy_annotations_has_resource(const struct google_protobuf_ServiceOptions *msg) { return _upb_msg_getext(msg, &envoy_annotations_resource_ext) != NULL; }
UPB_INLINE const envoy_annotations_ResourceAnnotation* envoy_annotations_resource(const struct google_protobuf_ServiceOptions *msg) { const upb_msg_ext *ext = _upb_msg_getext(msg, &envoy_annotations_resource_ext); UPB_ASSERT(ext); return *UPB_PTR_AT(&ext->data, 0, const envoy_annotations_ResourceAnnotation*); }
extern const upb_msglayout_file envoy_annotations_resource_proto_upb_file_layout;

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port_undef.inc"

#endif  /* ENVOY_ANNOTATIONS_RESOURCE_PROTO_UPB_H_ */
