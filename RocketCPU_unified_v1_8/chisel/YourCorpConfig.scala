package yourcorp

import freechips.rocketchip.config._
import freechips.rocketchip.system._
import boom.system._

/** Skeleton config — adjust to match the JSON spec in chiplets/rocket-boom/config.json */
class YourCorpConfig extends Config(
  new WithNBigBooms(2) ++
  new WithNSmallRockets(12) ++
  new WithInclusiveCache(nBanks = 8, capacityKB = 32768) ++
  new BaseConfig
)
