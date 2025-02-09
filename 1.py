
static PlayerDataMain = 1000

def UpdatePlayerdata(Playerdata):
    PlayerDataMain = Playerdata


def PlayerHit(Power):
    PlayerData =   Power - 100
    UpdatePlayerdata(PlayerData)
    return PlayerData

print(PlayerHit(PlayerDataMain))
print(PlayerHit(PlayerDataMain))
print(PlayerHit(PlayerDataMain))
print(PlayerHit(PlayerDataMain))



