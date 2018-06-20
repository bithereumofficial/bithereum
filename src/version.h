// Copyright (c) 2012 The Bitcoin developers
// Copyright (c) 2012-2013 The Bithereum developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
#ifndef BITCOIN_VERSION_H
#define BITCOIN_VERSION_H

#include <string>

//
// client versioning
//

// These need to be macro's, as version.cpp's voodoo requires it

// Bithereum version - intended for display purpose only
#define PEERUNITY_VERSION_MAJOR       1
#define PEERUNITY_VERSION_MINOR       0
#define PEERUNITY_VERSION_REVISION    0
#define PEERUNITY_VERSION_BUILD       0

static const int PEERUNITY_VERSION =
                           1000000 * PEERUNITY_VERSION_MAJOR
                         +   10000 * PEERUNITY_VERSION_MINOR
                         +     100 * PEERUNITY_VERSION_REVISION
                         +       1 * PEERUNITY_VERSION_BUILD;

// Bithereum version - reference for code tracking
#define BTH_VERSION_MAJOR       1
#define BTH_VERSION_MINOR       0
#define BTH_VERSION_REVISION    0
#define BTH_VERSION_BUILD       0

static const int BTH_VERSION =
                           1000000 * BTH_VERSION_MAJOR
                         +   10000 * BTH_VERSION_MINOR
                         +     100 * BTH_VERSION_REVISION
                         +       1 * BTH_VERSION_BUILD;

// bitcoin version - reference for code tracking
#define BITCOIN_VERSION_MAJOR       1
#define BITCOIN_VERSION_MINOR       0
#define BITCOIN_VERSION_REVISION    0
#define BITCOIN_VERSION_BUILD       0

static const int BITCOIN_VERSION =
                           1000000 * BITCOIN_VERSION_MAJOR
                         +   10000 * BITCOIN_VERSION_MINOR 
                         +     100 * BITCOIN_VERSION_REVISION
                         +       1 * BITCOIN_VERSION_BUILD;

static const int CLIENT_VERSION = BITCOIN_VERSION;

extern const std::string CLIENT_NAME;
extern const std::string CLIENT_BUILD;
extern const std::string CLIENT_DATE;


//
// network protocol versioning
//

static const int PROTOCOL_VERSION = 60005;

// earlier versions not supported as of Feb 2012, and are disconnected
// NOTE: as of bitcoin v0.6 message serialization (vSend, vRecv) still
// uses MIN_PROTO_VERSION(209), where message format uses PROTOCOL_VERSION
static const int MIN_PROTO_VERSION = 209;

// nTime field added to CAddress, starting with this version;
// if possible, avoid requesting addresses nodes older than this
static const int CADDR_TIME_VERSION = 32000;

// only request blocks from nodes outside this range of versions
static const int NOBLKS_VERSION_START = 32000;
static const int NOBLKS_VERSION_END = 32400;

// BIP 0031, pong message, is enabled for all versions AFTER this one
static const int BIP0031_VERSION = 60000;

#endif
