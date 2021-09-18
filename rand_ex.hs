import System.Random

newRand = randomIO :: IO Int

randomList :: Int -> [Double]
randomList seed = randoms (mkStdGen seed) :: [Double]

