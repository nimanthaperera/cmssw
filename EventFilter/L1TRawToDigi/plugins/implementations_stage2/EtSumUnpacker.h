#ifndef L1T_PACKER_STAGE2_ETSUMUNPACKER_H
#define L1T_PACKER_STAGE2_ETSUMUNPACKER_H

#include "EventFilter/L1TRawToDigi/interface/Unpacker.h"

namespace l1t {
   namespace stage2 {
      class EtSumUnpacker : public Unpacker {
         public:
            bool unpack(const Block& block, UnpackerCollections *coll) override;
      };
   }
}

#endif
