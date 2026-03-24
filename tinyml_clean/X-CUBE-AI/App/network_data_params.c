/**
  ******************************************************************************
  * @file    network_data_params.c
  * @author  AST Embedded Analytics Research Platform
  * @date    2026-03-24T09:03:08+0300
  * @brief   AI Tool Automatic Code Generator for Embedded NN computing
  ******************************************************************************
  * Copyright (c) 2026 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  ******************************************************************************
  */

#include "network_data_params.h"


/**  Activations Section  ****************************************************/
ai_handle g_network_activations_table[1 + 2] = {
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
  AI_HANDLE_PTR(NULL),
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
};




/**  Weights Section  ********************************************************/
AI_ALIGNED(32)
const ai_u64 s_network_weights_array_u64[89] = {
  0x3f0029a1bc181113U, 0xbf17686ebe91ca34U, 0xbd751865bece6730U, 0x3dc3220abdcec481U,
  0x3e4cf6b5bf15975dU, 0xbc00798f3ecd3212U, 0x3ebb5457bf319e54U, 0xbf02af093ee3bdf5U,
  0xbf2e8e92bd6e7c3eU, 0x3db54912bd401ef7U, 0xbd434f593dc23c87U, 0x3f68dfb03db24234U,
  0x3f772c8d3dab9ea2U, 0xbd402e99bf334e2fU, 0x3f3bbe123ded0d9dU, 0xbd6c33a7bf4946d7U,
  0xbef305583e1514b0U, 0xbcacfaeabbc40401U, 0x3e8e3b0e3e932af5U, 0xbf24d1f5be7d911cU,
  0xbeff00c43c8b9bdbU, 0x3de0ab5abe6c92c0U, 0xbed8fcecbe0aecf8U, 0x3ec9e8f3be5f70a8U,
  0xbeef1e4c3e82473cU, 0xbec4ebb83eaf9370U, 0xbe2e9cb8be8d7874U, 0xbe3d6798becb237cU,
  0x3e7bde88bd8c0250U, 0x3ec7ebbc3eb6317cU, 0xbefa23d8bee243b8U, 0x3eeef5d03adc3000U,
  0xbed0c6bc3ef2bf08U, 0xbee95c303e1bd7c9U, 0x3ef6759cbef7f618U, 0x3f43267bbd216aa7U,
  0x3f2832d33db3f33bU, 0xbeb1b4143e6ed988U, 0x3e7730723e225f6cU, 0x3d964294bdd757ecU,
  0x3e3decb6be05208dU, 0xbd2c43a2be2f924cU, 0xbf07db77bde749daU, 0xbe237e82bef659cbU,
  0x3e646782be8191bfU, 0x3ead08bebea6e1d9U, 0x3ed21ae93eac90a7U, 0x3da2d41f3d76a268U,
  0x3c7071b3be8ef68eU, 0x3f00cb5dbd77ef7eU, 0x3edd873e3dcef699U, 0x3e035fc53ecadda6U,
  0xbd7f83b73ee2490eU, 0x3cc2ada0bef9af09U, 0x3e52e79f3ed749d0U, 0xbe44f9c0bd95c0f9U,
  0x3e32678ebe2485efU, 0xbe1a2cd03ea9c55cU, 0x3e6df968be70684cU, 0x3bbec17e3e3eb12fU,
  0xbe5a49b1bdb428d9U, 0x3efa8277be7257e2U, 0x3e599ddc3e39e060U, 0xbe891ffd3e043abcU,
  0x3f038cf63e97d9f2U, 0xbcb74bdd3d8222b6U, 0xbed187de3ed9a644U, 0xbf13ec573edef5a9U,
  0x3ea47ebb3eae3a45U, 0x3e0e82cc3efbab3dU, 0x3e5d79e13ef1c52cU, 0xbd1cec9e3f054d4cU,
  0xbe73d3e8bec4aa6cU, 0x3ef0fb22be835505U, 0xbecea1d53ed5e9a4U, 0x3ebac972bc9019fbU,
  0xbee26a583e402b81U, 0x3e27741cbef88428U, 0x3dedecf0be2fb385U, 0x3e74acbebe97fa38U,
  0xbd8ca351U, 0x3f08cad53f10136dU, 0x3f1513a6bc680c6aU, 0x3d97c20cbf0980b3U,
  0xbdaf44d83f2701a5U, 0x3f66f1483f629ff9U, 0x3e2932bcbf3a3faeU, 0xbf52e077bf6a47bfU,
  0x3f04333aU,
};


ai_handle g_network_weights_table[1 + 2] = {
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
  AI_HANDLE_PTR(s_network_weights_array_u64),
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
};

