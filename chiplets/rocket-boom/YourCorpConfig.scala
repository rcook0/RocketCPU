// YourCorpConfig.scala
package yourcorp

import freechips.rocketchip.config._
import freechips.rocketchip.system._
import boom.system._

class YourCorpConfig extends Config(
  // BOOM cores (high-performance)
  new WithNBigBooms(2) ++
  // Rocket cores (efficient)
  new WithNSmallRockets(12) ++
  // L2/L3 cache settings (example: 32 MiB shared L3 via inclusive cache)
  new WithInclusiveCache(nBanks = 8, capacityKB = 32768) ++
  // Base RocketChip settings
  new BaseConfig
)
