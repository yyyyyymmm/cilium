/* SPDX-License-Identifier: (GPL-2.0-only OR BSD-2-Clause) */
/* Copyright Authors of Cilium */

#include <bpf/config/node.h>

#ifndef TEST_NODEPORT_PORT_MIN_NAT
#define TEST_NODEPORT_PORT_MIN_NAT 32768
#endif

#ifndef TEST_NODEPORT_PORT_MAX_NAT
#define TEST_NODEPORT_PORT_MAX_NAT 65535
#endif

#ifndef TEST_NODEPORT_PORT_MIN_NAT_EXT
#define TEST_NODEPORT_PORT_MIN_NAT_EXT 0
#endif

#ifndef TEST_NODEPORT_PORT_MAX_NAT_EXT
#define TEST_NODEPORT_PORT_MAX_NAT_EXT 0
#endif

ASSIGN_CONFIG(__u16, nodeport_port_min, 30000)
ASSIGN_CONFIG(__u16, nodeport_port_max, 32767)
ASSIGN_CONFIG(__u16, nodeport_port_min_nat, TEST_NODEPORT_PORT_MIN_NAT)
ASSIGN_CONFIG(__u16, nodeport_port_max_nat, TEST_NODEPORT_PORT_MAX_NAT)
ASSIGN_CONFIG(__u16, nodeport_port_min_nat_ext, TEST_NODEPORT_PORT_MIN_NAT_EXT)
ASSIGN_CONFIG(__u16, nodeport_port_max_nat_ext, TEST_NODEPORT_PORT_MAX_NAT_EXT)
