/* ------------------------------------ */
/* AUTHOR   Azgath                      */
/*    FOR   Az'gath Private Server      */
/* ------------------------------------ */

class azgath_guid_flying : public PlayerScript
{
private:
    bool isEnabled = true;
    uint32 flyWod = 191645; /* Draenor Pathfinder */
    uint32 flyLegion = 233368; /* Broken Isles Pathfinder */

public:
    azgath_guid_flying() : PlayerScript("azgath_guid_flying") {}

    void OnLogin(Player* player, bool /*firstLogin*/) {
        if (isEnabled) {
	        if (!player->HasSpell(flyWod)) {
                player->LearnSpell(flyWod, false);
            }

            if (!player->HasSpell(flyLegion)) {
                player->LearnSpell(flyLegion, false);
            }
        }
    }
};

void AddSC_azgath_guid_flying()
{
    new azgath_guid_flying();
}
