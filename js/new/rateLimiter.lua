local user = KEYS[1]
local currentTime = tonumber(ARGV[1])
local window = tonumber(ARGV[2])
local limit = tonumber(ARGV[3])

redis.call(
     "ZREMRANGEBYSCORE",
     user,
     0 ,
     currentTime - window
)
local count = redis.call(
    "ZCARD",
    user
)
if count >= limit then
    return 0
end

redis.call(
    "ZADD",
    user,
    currentTime,
    tostring(currentTime)
)

redis.call(
    "EXPIRE",
    user,
    60
)

return 1