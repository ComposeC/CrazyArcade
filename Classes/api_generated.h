// automatically generated by the FlatBuffers compiler, do not modify

#ifndef FLATBUFFERS_GENERATED_API_API_H_
#define FLATBUFFERS_GENERATED_API_API_H_

#include "flatbuffers/flatbuffers.h"

namespace API
{

    struct PlayerJoin;

    struct PlayerPosChange;

    struct PlayerSetBubble;

    struct BubbleSet;

    struct BubbleBoom;

    struct PropSet;

    struct PlayerEatProp;

    struct PlayerAttrChange;

    struct PlayerStatusChange;

    struct GameStatusChange;

    struct Msg;

    enum Direction
    {
        Direction_LEFT = 0,
        Direction_RIGHT = 1,
        Direction_UP = 2,
        Direction_DOWN = 3,
        Direction_NONE = 4,
        Direction_MIN = Direction_LEFT,
        Direction_MAX = Direction_NONE
    };

    inline const char **EnumNamesDirection()
    {
        static const char *names[] = { "LEFT", "RIGHT", "UP", "DOWN", "NONE", nullptr };
        return names;
    }

    inline const char *EnumNameDirection(Direction e) { return EnumNamesDirection()[static_cast<int>(e)]; }

    enum PropType
    {
        PropType_SPEED_UP = 0,
        PropType_DAMAGE_UP = 1,
        PropType_BUBBLE_UP = 2,
        PropType_MIN = PropType_SPEED_UP,
        PropType_MAX = PropType_BUBBLE_UP
    };

    inline const char **EnumNamesPropType()
    {
        static const char *names[] = { "SPEED_UP", "DAMAGE_UP", "BUBBLE_UP", nullptr };
        return names;
    }

    inline const char *EnumNamePropType(PropType e) { return EnumNamesPropType()[static_cast<int>(e)]; }

    enum PlayerStatus
    {
        PlayerStatus_FREE = 0,
        PlayerStatus_FREEZE = 1,
        PlayerStatus_DIE = 2,
        PlayerStatus_MIN = PlayerStatus_FREE,
        PlayerStatus_MAX = PlayerStatus_DIE
    };

    inline const char **EnumNamesPlayerStatus()
    {
        static const char *names[] = { "FREE", "FREEZE", "DIE", nullptr };
        return names;
    }

    inline const char *EnumNamePlayerStatus(PlayerStatus e) { return EnumNamesPlayerStatus()[static_cast<int>(e)]; }

    enum GameStatus
    {
        GameStatus_WAITING = 0,
        GameStatus_PENDING = 1,
        GameStatus_START = 2,
        GameStatus_OVER = 3,
        GameStatus_MIN = GameStatus_WAITING,
        GameStatus_MAX = GameStatus_OVER
    };

    inline const char **EnumNamesGameStatus()
    {
        static const char *names[] = { "WAITING", "PENDING", "START", "OVER", nullptr };
        return names;
    }

    inline const char *EnumNameGameStatus(GameStatus e) { return EnumNamesGameStatus()[static_cast<int>(e)]; }

    enum MsgType
    {
        MsgType_NONE = 0,
        MsgType_PlayerJoin = 1,
        MsgType_PlayerPosChange = 2,
        MsgType_PlayerSetBubble = 3,
        MsgType_BubbleSet = 4,
        MsgType_BubbleBoom = 5,
        MsgType_PropSet = 6,
        MsgType_PlayerEatProp = 7,
        MsgType_PlayerAttrChange = 8,
        MsgType_PlayerStatusChange = 9,
        MsgType_GameStatusChange = 10,
        MsgType_MIN = MsgType_NONE,
        MsgType_MAX = MsgType_GameStatusChange
    };

    inline const char **EnumNamesMsgType()
    {
        static const char *names[] = { "NONE", "PlayerJoin", "PlayerPosChange", "PlayerSetBubble", "BubbleSet", "BubbleBoom", "PropSet", "PlayerEatProp", "PlayerAttrChange", "PlayerStatusChange", "GameStatusChange", nullptr };
        return names;
    }

    inline const char *EnumNameMsgType(MsgType e) { return EnumNamesMsgType()[static_cast<int>(e)]; }

    template<typename T> struct MsgTypeTraits
    {
        static const MsgType enum_value = MsgType_NONE;
    };

    template<> struct MsgTypeTraits<PlayerJoin>
    {
        static const MsgType enum_value = MsgType_PlayerJoin;
    };

    template<> struct MsgTypeTraits<PlayerPosChange>
    {
        static const MsgType enum_value = MsgType_PlayerPosChange;
    };

    template<> struct MsgTypeTraits<PlayerSetBubble>
    {
        static const MsgType enum_value = MsgType_PlayerSetBubble;
    };

    template<> struct MsgTypeTraits<BubbleSet>
    {
        static const MsgType enum_value = MsgType_BubbleSet;
    };

    template<> struct MsgTypeTraits<BubbleBoom>
    {
        static const MsgType enum_value = MsgType_BubbleBoom;
    };

    template<> struct MsgTypeTraits<PropSet>
    {
        static const MsgType enum_value = MsgType_PropSet;
    };

    template<> struct MsgTypeTraits<PlayerEatProp>
    {
        static const MsgType enum_value = MsgType_PlayerEatProp;
    };

    template<> struct MsgTypeTraits<PlayerAttrChange>
    {
        static const MsgType enum_value = MsgType_PlayerAttrChange;
    };

    template<> struct MsgTypeTraits<PlayerStatusChange>
    {
        static const MsgType enum_value = MsgType_PlayerStatusChange;
    };

    template<> struct MsgTypeTraits<GameStatusChange>
    {
        static const MsgType enum_value = MsgType_GameStatusChange;
    };

    inline bool VerifyMsgType(flatbuffers::Verifier &verifier, const void *union_obj, MsgType type);

    struct PlayerJoin FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table
    {
        enum
        {
            VT_ID = 4,
            VT_X = 6,
            VT_Y = 8,
            VT_IS_LOCAL = 10
        };
        const flatbuffers::String *id() const { return GetPointer<const flatbuffers::String *>(VT_ID); }
        int32_t x() const { return GetField<int32_t>(VT_X, 0); }
        int32_t y() const { return GetField<int32_t>(VT_Y, 0); }
        bool is_local() const { return GetField<uint8_t>(VT_IS_LOCAL, 0) != 0; }
        bool Verify(flatbuffers::Verifier &verifier) const
        {
            return VerifyTableStart(verifier) &&
                VerifyField<flatbuffers::uoffset_t>(verifier, VT_ID) &&
                verifier.Verify(id()) &&
                VerifyField<int32_t>(verifier, VT_X) &&
                VerifyField<int32_t>(verifier, VT_Y) &&
                VerifyField<uint8_t>(verifier, VT_IS_LOCAL) &&
                verifier.EndTable();
        }
    };

    struct PlayerJoinBuilder
    {
        flatbuffers::FlatBufferBuilder &fbb_;
        flatbuffers::uoffset_t start_;
        void add_id(flatbuffers::Offset<flatbuffers::String> id) { fbb_.AddOffset(PlayerJoin::VT_ID, id); }
        void add_x(int32_t x) { fbb_.AddElement<int32_t>(PlayerJoin::VT_X, x, 0); }
        void add_y(int32_t y) { fbb_.AddElement<int32_t>(PlayerJoin::VT_Y, y, 0); }
        void add_is_local(bool is_local) { fbb_.AddElement<uint8_t>(PlayerJoin::VT_IS_LOCAL, static_cast<uint8_t>(is_local), 0); }
        PlayerJoinBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
        PlayerJoinBuilder &operator=(const PlayerJoinBuilder &);
        flatbuffers::Offset<PlayerJoin> Finish()
        {
            auto o = flatbuffers::Offset<PlayerJoin>(fbb_.EndTable(start_, 4));
            return o;
        }
    };

    inline flatbuffers::Offset<PlayerJoin> CreatePlayerJoin(flatbuffers::FlatBufferBuilder &_fbb,
        flatbuffers::Offset<flatbuffers::String> id = 0,
        int32_t x = 0,
        int32_t y = 0,
        bool is_local = false)
    {
        PlayerJoinBuilder builder_(_fbb);
        builder_.add_y(y);
        builder_.add_x(x);
        builder_.add_id(id);
        builder_.add_is_local(is_local);
        return builder_.Finish();
    }

    inline flatbuffers::Offset<PlayerJoin> CreatePlayerJoinDirect(flatbuffers::FlatBufferBuilder &_fbb,
        const char *id = nullptr,
        int32_t x = 0,
        int32_t y = 0,
        bool is_local = false)
    {
        return CreatePlayerJoin(_fbb, id ? _fbb.CreateString(id) : 0, x, y, is_local);
    }

    struct PlayerPosChange FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table
    {
        enum
        {
            VT_ID = 4,
            VT_DIRECTION = 6,
            VT_X = 8,
            VT_Y = 10
        };
        const flatbuffers::String *id() const { return GetPointer<const flatbuffers::String *>(VT_ID); }
        Direction direction() const { return static_cast<Direction>(GetField<int8_t>(VT_DIRECTION, 0)); }
        int32_t x() const { return GetField<int32_t>(VT_X, 0); }
        int32_t y() const { return GetField<int32_t>(VT_Y, 0); }
        bool Verify(flatbuffers::Verifier &verifier) const
        {
            return VerifyTableStart(verifier) &&
                VerifyField<flatbuffers::uoffset_t>(verifier, VT_ID) &&
                verifier.Verify(id()) &&
                VerifyField<int8_t>(verifier, VT_DIRECTION) &&
                VerifyField<int32_t>(verifier, VT_X) &&
                VerifyField<int32_t>(verifier, VT_Y) &&
                verifier.EndTable();
        }
    };

    struct PlayerPosChangeBuilder
    {
        flatbuffers::FlatBufferBuilder &fbb_;
        flatbuffers::uoffset_t start_;
        void add_id(flatbuffers::Offset<flatbuffers::String> id) { fbb_.AddOffset(PlayerPosChange::VT_ID, id); }
        void add_direction(Direction direction) { fbb_.AddElement<int8_t>(PlayerPosChange::VT_DIRECTION, static_cast<int8_t>(direction), 0); }
        void add_x(int32_t x) { fbb_.AddElement<int32_t>(PlayerPosChange::VT_X, x, 0); }
        void add_y(int32_t y) { fbb_.AddElement<int32_t>(PlayerPosChange::VT_Y, y, 0); }
        PlayerPosChangeBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
        PlayerPosChangeBuilder &operator=(const PlayerPosChangeBuilder &);
        flatbuffers::Offset<PlayerPosChange> Finish()
        {
            auto o = flatbuffers::Offset<PlayerPosChange>(fbb_.EndTable(start_, 4));
            return o;
        }
    };

    inline flatbuffers::Offset<PlayerPosChange> CreatePlayerPosChange(flatbuffers::FlatBufferBuilder &_fbb,
        flatbuffers::Offset<flatbuffers::String> id = 0,
        Direction direction = Direction_LEFT,
        int32_t x = 0,
        int32_t y = 0)
    {
        PlayerPosChangeBuilder builder_(_fbb);
        builder_.add_y(y);
        builder_.add_x(x);
        builder_.add_id(id);
        builder_.add_direction(direction);
        return builder_.Finish();
    }

    inline flatbuffers::Offset<PlayerPosChange> CreatePlayerPosChangeDirect(flatbuffers::FlatBufferBuilder &_fbb,
        const char *id = nullptr,
        Direction direction = Direction_LEFT,
        int32_t x = 0,
        int32_t y = 0)
    {
        return CreatePlayerPosChange(_fbb, id ? _fbb.CreateString(id) : 0, direction, x, y);
    }

    struct PlayerSetBubble FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table
    {
        enum
        {
            VT_ID = 4
        };
        const flatbuffers::String *id() const { return GetPointer<const flatbuffers::String *>(VT_ID); }
        bool Verify(flatbuffers::Verifier &verifier) const
        {
            return VerifyTableStart(verifier) &&
                VerifyField<flatbuffers::uoffset_t>(verifier, VT_ID) &&
                verifier.Verify(id()) &&
                verifier.EndTable();
        }
    };

    struct PlayerSetBubbleBuilder
    {
        flatbuffers::FlatBufferBuilder &fbb_;
        flatbuffers::uoffset_t start_;
        void add_id(flatbuffers::Offset<flatbuffers::String> id) { fbb_.AddOffset(PlayerSetBubble::VT_ID, id); }
        PlayerSetBubbleBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
        PlayerSetBubbleBuilder &operator=(const PlayerSetBubbleBuilder &);
        flatbuffers::Offset<PlayerSetBubble> Finish()
        {
            auto o = flatbuffers::Offset<PlayerSetBubble>(fbb_.EndTable(start_, 1));
            return o;
        }
    };

    inline flatbuffers::Offset<PlayerSetBubble> CreatePlayerSetBubble(flatbuffers::FlatBufferBuilder &_fbb,
        flatbuffers::Offset<flatbuffers::String> id = 0)
    {
        PlayerSetBubbleBuilder builder_(_fbb);
        builder_.add_id(id);
        return builder_.Finish();
    }

    inline flatbuffers::Offset<PlayerSetBubble> CreatePlayerSetBubbleDirect(flatbuffers::FlatBufferBuilder &_fbb,
        const char *id = nullptr)
    {
        return CreatePlayerSetBubble(_fbb, id ? _fbb.CreateString(id) : 0);
    }

    struct BubbleSet FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table
    {
        enum
        {
            VT_ID = 4,
            VT_PLAYER_ID = 6,
            VT_X = 8,
            VT_Y = 10,
            VT_DAMAGE = 12
        };
        const flatbuffers::String *id() const { return GetPointer<const flatbuffers::String *>(VT_ID); }
        const flatbuffers::String *player_id() const { return GetPointer<const flatbuffers::String *>(VT_PLAYER_ID); }
        int32_t x() const { return GetField<int32_t>(VT_X, 0); }
        int32_t y() const { return GetField<int32_t>(VT_Y, 0); }
        uint8_t damage() const { return GetField<uint8_t>(VT_DAMAGE, 0); }
        bool Verify(flatbuffers::Verifier &verifier) const
        {
            return VerifyTableStart(verifier) &&
                VerifyField<flatbuffers::uoffset_t>(verifier, VT_ID) &&
                verifier.Verify(id()) &&
                VerifyField<flatbuffers::uoffset_t>(verifier, VT_PLAYER_ID) &&
                verifier.Verify(player_id()) &&
                VerifyField<int32_t>(verifier, VT_X) &&
                VerifyField<int32_t>(verifier, VT_Y) &&
                VerifyField<uint8_t>(verifier, VT_DAMAGE) &&
                verifier.EndTable();
        }
    };

    struct BubbleSetBuilder
    {
        flatbuffers::FlatBufferBuilder &fbb_;
        flatbuffers::uoffset_t start_;
        void add_id(flatbuffers::Offset<flatbuffers::String> id) { fbb_.AddOffset(BubbleSet::VT_ID, id); }
        void add_player_id(flatbuffers::Offset<flatbuffers::String> player_id) { fbb_.AddOffset(BubbleSet::VT_PLAYER_ID, player_id); }
        void add_x(int32_t x) { fbb_.AddElement<int32_t>(BubbleSet::VT_X, x, 0); }
        void add_y(int32_t y) { fbb_.AddElement<int32_t>(BubbleSet::VT_Y, y, 0); }
        void add_damage(uint8_t damage) { fbb_.AddElement<uint8_t>(BubbleSet::VT_DAMAGE, damage, 0); }
        BubbleSetBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
        BubbleSetBuilder &operator=(const BubbleSetBuilder &);
        flatbuffers::Offset<BubbleSet> Finish()
        {
            auto o = flatbuffers::Offset<BubbleSet>(fbb_.EndTable(start_, 5));
            return o;
        }
    };

    inline flatbuffers::Offset<BubbleSet> CreateBubbleSet(flatbuffers::FlatBufferBuilder &_fbb,
        flatbuffers::Offset<flatbuffers::String> id = 0,
        flatbuffers::Offset<flatbuffers::String> player_id = 0,
        int32_t x = 0,
        int32_t y = 0,
        uint8_t damage = 0)
    {
        BubbleSetBuilder builder_(_fbb);
        builder_.add_y(y);
        builder_.add_x(x);
        builder_.add_player_id(player_id);
        builder_.add_id(id);
        builder_.add_damage(damage);
        return builder_.Finish();
    }

    inline flatbuffers::Offset<BubbleSet> CreateBubbleSetDirect(flatbuffers::FlatBufferBuilder &_fbb,
        const char *id = nullptr,
        const char *player_id = nullptr,
        int32_t x = 0,
        int32_t y = 0,
        uint8_t damage = 0)
    {
        return CreateBubbleSet(_fbb, id ? _fbb.CreateString(id) : 0, player_id ? _fbb.CreateString(player_id) : 0, x, y, damage);
    }

    struct BubbleBoom FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table
    {
        enum
        {
            VT_ID = 4
        };
        const flatbuffers::String *id() const { return GetPointer<const flatbuffers::String *>(VT_ID); }
        bool Verify(flatbuffers::Verifier &verifier) const
        {
            return VerifyTableStart(verifier) &&
                VerifyField<flatbuffers::uoffset_t>(verifier, VT_ID) &&
                verifier.Verify(id()) &&
                verifier.EndTable();
        }
    };

    struct BubbleBoomBuilder
    {
        flatbuffers::FlatBufferBuilder &fbb_;
        flatbuffers::uoffset_t start_;
        void add_id(flatbuffers::Offset<flatbuffers::String> id) { fbb_.AddOffset(BubbleBoom::VT_ID, id); }
        BubbleBoomBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
        BubbleBoomBuilder &operator=(const BubbleBoomBuilder &);
        flatbuffers::Offset<BubbleBoom> Finish()
        {
            auto o = flatbuffers::Offset<BubbleBoom>(fbb_.EndTable(start_, 1));
            return o;
        }
    };

    inline flatbuffers::Offset<BubbleBoom> CreateBubbleBoom(flatbuffers::FlatBufferBuilder &_fbb,
        flatbuffers::Offset<flatbuffers::String> id = 0)
    {
        BubbleBoomBuilder builder_(_fbb);
        builder_.add_id(id);
        return builder_.Finish();
    }

    inline flatbuffers::Offset<BubbleBoom> CreateBubbleBoomDirect(flatbuffers::FlatBufferBuilder &_fbb,
        const char *id = nullptr)
    {
        return CreateBubbleBoom(_fbb, id ? _fbb.CreateString(id) : 0);
    }

    struct PropSet FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table
    {
        enum
        {
            VT_ID = 4,
            VT_X = 6,
            VT_Y = 8,
            VT_TYPE = 10
        };
        const flatbuffers::String *id() const { return GetPointer<const flatbuffers::String *>(VT_ID); }
        int32_t x() const { return GetField<int32_t>(VT_X, 0); }
        int32_t y() const { return GetField<int32_t>(VT_Y, 0); }
        PropType type() const { return static_cast<PropType>(GetField<int8_t>(VT_TYPE, 0)); }
        bool Verify(flatbuffers::Verifier &verifier) const
        {
            return VerifyTableStart(verifier) &&
                VerifyField<flatbuffers::uoffset_t>(verifier, VT_ID) &&
                verifier.Verify(id()) &&
                VerifyField<int32_t>(verifier, VT_X) &&
                VerifyField<int32_t>(verifier, VT_Y) &&
                VerifyField<int8_t>(verifier, VT_TYPE) &&
                verifier.EndTable();
        }
    };

    struct PropSetBuilder
    {
        flatbuffers::FlatBufferBuilder &fbb_;
        flatbuffers::uoffset_t start_;
        void add_id(flatbuffers::Offset<flatbuffers::String> id) { fbb_.AddOffset(PropSet::VT_ID, id); }
        void add_x(int32_t x) { fbb_.AddElement<int32_t>(PropSet::VT_X, x, 0); }
        void add_y(int32_t y) { fbb_.AddElement<int32_t>(PropSet::VT_Y, y, 0); }
        void add_type(PropType type) { fbb_.AddElement<int8_t>(PropSet::VT_TYPE, static_cast<int8_t>(type), 0); }
        PropSetBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
        PropSetBuilder &operator=(const PropSetBuilder &);
        flatbuffers::Offset<PropSet> Finish()
        {
            auto o = flatbuffers::Offset<PropSet>(fbb_.EndTable(start_, 4));
            return o;
        }
    };

    inline flatbuffers::Offset<PropSet> CreatePropSet(flatbuffers::FlatBufferBuilder &_fbb,
        flatbuffers::Offset<flatbuffers::String> id = 0,
        int32_t x = 0,
        int32_t y = 0,
        PropType type = PropType_SPEED_UP)
    {
        PropSetBuilder builder_(_fbb);
        builder_.add_y(y);
        builder_.add_x(x);
        builder_.add_id(id);
        builder_.add_type(type);
        return builder_.Finish();
    }

    inline flatbuffers::Offset<PropSet> CreatePropSetDirect(flatbuffers::FlatBufferBuilder &_fbb,
        const char *id = nullptr,
        int32_t x = 0,
        int32_t y = 0,
        PropType type = PropType_SPEED_UP)
    {
        return CreatePropSet(_fbb, id ? _fbb.CreateString(id) : 0, x, y, type);
    }

    struct PlayerEatProp FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table
    {
        enum
        {
            VT_PLAYER_ID = 4,
            VT_BUBBLE_ID = 6
        };
        const flatbuffers::String *player_id() const { return GetPointer<const flatbuffers::String *>(VT_PLAYER_ID); }
        const flatbuffers::String *bubble_id() const { return GetPointer<const flatbuffers::String *>(VT_BUBBLE_ID); }
        bool Verify(flatbuffers::Verifier &verifier) const
        {
            return VerifyTableStart(verifier) &&
                VerifyField<flatbuffers::uoffset_t>(verifier, VT_PLAYER_ID) &&
                verifier.Verify(player_id()) &&
                VerifyField<flatbuffers::uoffset_t>(verifier, VT_BUBBLE_ID) &&
                verifier.Verify(bubble_id()) &&
                verifier.EndTable();
        }
    };

    struct PlayerEatPropBuilder
    {
        flatbuffers::FlatBufferBuilder &fbb_;
        flatbuffers::uoffset_t start_;
        void add_player_id(flatbuffers::Offset<flatbuffers::String> player_id) { fbb_.AddOffset(PlayerEatProp::VT_PLAYER_ID, player_id); }
        void add_bubble_id(flatbuffers::Offset<flatbuffers::String> bubble_id) { fbb_.AddOffset(PlayerEatProp::VT_BUBBLE_ID, bubble_id); }
        PlayerEatPropBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
        PlayerEatPropBuilder &operator=(const PlayerEatPropBuilder &);
        flatbuffers::Offset<PlayerEatProp> Finish()
        {
            auto o = flatbuffers::Offset<PlayerEatProp>(fbb_.EndTable(start_, 2));
            return o;
        }
    };

    inline flatbuffers::Offset<PlayerEatProp> CreatePlayerEatProp(flatbuffers::FlatBufferBuilder &_fbb,
        flatbuffers::Offset<flatbuffers::String> player_id = 0,
        flatbuffers::Offset<flatbuffers::String> bubble_id = 0)
    {
        PlayerEatPropBuilder builder_(_fbb);
        builder_.add_bubble_id(bubble_id);
        builder_.add_player_id(player_id);
        return builder_.Finish();
    }

    inline flatbuffers::Offset<PlayerEatProp> CreatePlayerEatPropDirect(flatbuffers::FlatBufferBuilder &_fbb,
        const char *player_id = nullptr,
        const char *bubble_id = nullptr)
    {
        return CreatePlayerEatProp(_fbb, player_id ? _fbb.CreateString(player_id) : 0, bubble_id ? _fbb.CreateString(bubble_id) : 0);
    }

    struct PlayerAttrChange FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table
    {
        enum
        {
            VT_SPEED = 4,
            VT_DAMAGE = 6,
            VT_MAXBUBBLE = 8
        };
        uint8_t speed() const { return GetField<uint8_t>(VT_SPEED, 0); }
        uint8_t damage() const { return GetField<uint8_t>(VT_DAMAGE, 0); }
        uint8_t maxBubble() const { return GetField<uint8_t>(VT_MAXBUBBLE, 0); }
        bool Verify(flatbuffers::Verifier &verifier) const
        {
            return VerifyTableStart(verifier) &&
                VerifyField<uint8_t>(verifier, VT_SPEED) &&
                VerifyField<uint8_t>(verifier, VT_DAMAGE) &&
                VerifyField<uint8_t>(verifier, VT_MAXBUBBLE) &&
                verifier.EndTable();
        }
    };

    struct PlayerAttrChangeBuilder
    {
        flatbuffers::FlatBufferBuilder &fbb_;
        flatbuffers::uoffset_t start_;
        void add_speed(uint8_t speed) { fbb_.AddElement<uint8_t>(PlayerAttrChange::VT_SPEED, speed, 0); }
        void add_damage(uint8_t damage) { fbb_.AddElement<uint8_t>(PlayerAttrChange::VT_DAMAGE, damage, 0); }
        void add_maxBubble(uint8_t maxBubble) { fbb_.AddElement<uint8_t>(PlayerAttrChange::VT_MAXBUBBLE, maxBubble, 0); }
        PlayerAttrChangeBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
        PlayerAttrChangeBuilder &operator=(const PlayerAttrChangeBuilder &);
        flatbuffers::Offset<PlayerAttrChange> Finish()
        {
            auto o = flatbuffers::Offset<PlayerAttrChange>(fbb_.EndTable(start_, 3));
            return o;
        }
    };

    inline flatbuffers::Offset<PlayerAttrChange> CreatePlayerAttrChange(flatbuffers::FlatBufferBuilder &_fbb,
        uint8_t speed = 0,
        uint8_t damage = 0,
        uint8_t maxBubble = 0)
    {
        PlayerAttrChangeBuilder builder_(_fbb);
        builder_.add_maxBubble(maxBubble);
        builder_.add_damage(damage);
        builder_.add_speed(speed);
        return builder_.Finish();
    }

    struct PlayerStatusChange FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table
    {
        enum
        {
            VT_ID = 4,
            VT_STATUS = 6
        };
        const flatbuffers::String *id() const { return GetPointer<const flatbuffers::String *>(VT_ID); }
        PlayerStatus status() const { return static_cast<PlayerStatus>(GetField<int8_t>(VT_STATUS, 0)); }
        bool Verify(flatbuffers::Verifier &verifier) const
        {
            return VerifyTableStart(verifier) &&
                VerifyField<flatbuffers::uoffset_t>(verifier, VT_ID) &&
                verifier.Verify(id()) &&
                VerifyField<int8_t>(verifier, VT_STATUS) &&
                verifier.EndTable();
        }
    };

    struct PlayerStatusChangeBuilder
    {
        flatbuffers::FlatBufferBuilder &fbb_;
        flatbuffers::uoffset_t start_;
        void add_id(flatbuffers::Offset<flatbuffers::String> id) { fbb_.AddOffset(PlayerStatusChange::VT_ID, id); }
        void add_status(PlayerStatus status) { fbb_.AddElement<int8_t>(PlayerStatusChange::VT_STATUS, static_cast<int8_t>(status), 0); }
        PlayerStatusChangeBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
        PlayerStatusChangeBuilder &operator=(const PlayerStatusChangeBuilder &);
        flatbuffers::Offset<PlayerStatusChange> Finish()
        {
            auto o = flatbuffers::Offset<PlayerStatusChange>(fbb_.EndTable(start_, 2));
            return o;
        }
    };

    inline flatbuffers::Offset<PlayerStatusChange> CreatePlayerStatusChange(flatbuffers::FlatBufferBuilder &_fbb,
        flatbuffers::Offset<flatbuffers::String> id = 0,
        PlayerStatus status = PlayerStatus_FREE)
    {
        PlayerStatusChangeBuilder builder_(_fbb);
        builder_.add_id(id);
        builder_.add_status(status);
        return builder_.Finish();
    }

    inline flatbuffers::Offset<PlayerStatusChange> CreatePlayerStatusChangeDirect(flatbuffers::FlatBufferBuilder &_fbb,
        const char *id = nullptr,
        PlayerStatus status = PlayerStatus_FREE)
    {
        return CreatePlayerStatusChange(_fbb, id ? _fbb.CreateString(id) : 0, status);
    }

    struct GameStatusChange FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table
    {
        enum
        {
            VT_STATUS = 4
        };
        GameStatus status() const { return static_cast<GameStatus>(GetField<int8_t>(VT_STATUS, 0)); }
        bool Verify(flatbuffers::Verifier &verifier) const
        {
            return VerifyTableStart(verifier) &&
                VerifyField<int8_t>(verifier, VT_STATUS) &&
                verifier.EndTable();
        }
    };

    struct GameStatusChangeBuilder
    {
        flatbuffers::FlatBufferBuilder &fbb_;
        flatbuffers::uoffset_t start_;
        void add_status(GameStatus status) { fbb_.AddElement<int8_t>(GameStatusChange::VT_STATUS, static_cast<int8_t>(status), 0); }
        GameStatusChangeBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
        GameStatusChangeBuilder &operator=(const GameStatusChangeBuilder &);
        flatbuffers::Offset<GameStatusChange> Finish()
        {
            auto o = flatbuffers::Offset<GameStatusChange>(fbb_.EndTable(start_, 1));
            return o;
        }
    };

    inline flatbuffers::Offset<GameStatusChange> CreateGameStatusChange(flatbuffers::FlatBufferBuilder &_fbb,
        GameStatus status = GameStatus_WAITING)
    {
        GameStatusChangeBuilder builder_(_fbb);
        builder_.add_status(status);
        return builder_.Finish();
    }

    struct Msg FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table
    {
        enum
        {
            VT_DATA_TYPE = 4,
            VT_DATA = 6
        };
        MsgType data_type() const { return static_cast<MsgType>(GetField<uint8_t>(VT_DATA_TYPE, 0)); }
        const void *data() const { return GetPointer<const void *>(VT_DATA); }
        bool Verify(flatbuffers::Verifier &verifier) const
        {
            return VerifyTableStart(verifier) &&
                VerifyField<uint8_t>(verifier, VT_DATA_TYPE) &&
                VerifyField<flatbuffers::uoffset_t>(verifier, VT_DATA) &&
                VerifyMsgType(verifier, data(), data_type()) &&
                verifier.EndTable();
        }
    };

    struct MsgBuilder
    {
        flatbuffers::FlatBufferBuilder &fbb_;
        flatbuffers::uoffset_t start_;
        void add_data_type(MsgType data_type) { fbb_.AddElement<uint8_t>(Msg::VT_DATA_TYPE, static_cast<uint8_t>(data_type), 0); }
        void add_data(flatbuffers::Offset<void> data) { fbb_.AddOffset(Msg::VT_DATA, data); }
        MsgBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
        MsgBuilder &operator=(const MsgBuilder &);
        flatbuffers::Offset<Msg> Finish()
        {
            auto o = flatbuffers::Offset<Msg>(fbb_.EndTable(start_, 2));
            return o;
        }
    };

    inline flatbuffers::Offset<Msg> CreateMsg(flatbuffers::FlatBufferBuilder &_fbb,
        MsgType data_type = MsgType_NONE,
        flatbuffers::Offset<void> data = 0)
    {
        MsgBuilder builder_(_fbb);
        builder_.add_data(data);
        builder_.add_data_type(data_type);
        return builder_.Finish();
    }

    inline bool VerifyMsgType(flatbuffers::Verifier &verifier, const void *union_obj, MsgType type)
    {
        switch (type)
        {
        case MsgType_NONE: return true;
        case MsgType_PlayerJoin: return verifier.VerifyTable(reinterpret_cast<const PlayerJoin *>(union_obj));
        case MsgType_PlayerPosChange: return verifier.VerifyTable(reinterpret_cast<const PlayerPosChange *>(union_obj));
        case MsgType_PlayerSetBubble: return verifier.VerifyTable(reinterpret_cast<const PlayerSetBubble *>(union_obj));
        case MsgType_BubbleSet: return verifier.VerifyTable(reinterpret_cast<const BubbleSet *>(union_obj));
        case MsgType_BubbleBoom: return verifier.VerifyTable(reinterpret_cast<const BubbleBoom *>(union_obj));
        case MsgType_PropSet: return verifier.VerifyTable(reinterpret_cast<const PropSet *>(union_obj));
        case MsgType_PlayerEatProp: return verifier.VerifyTable(reinterpret_cast<const PlayerEatProp *>(union_obj));
        case MsgType_PlayerAttrChange: return verifier.VerifyTable(reinterpret_cast<const PlayerAttrChange *>(union_obj));
        case MsgType_PlayerStatusChange: return verifier.VerifyTable(reinterpret_cast<const PlayerStatusChange *>(union_obj));
        case MsgType_GameStatusChange: return verifier.VerifyTable(reinterpret_cast<const GameStatusChange *>(union_obj));
        default: return false;
        }
    }

    inline const API::Msg *GetMsg(const void *buf)
    {
        return flatbuffers::GetRoot<API::Msg>(buf);
    }

    inline bool VerifyMsgBuffer(flatbuffers::Verifier &verifier)
    {
        return verifier.VerifyBuffer<API::Msg>(nullptr);
    }

    inline void FinishMsgBuffer(flatbuffers::FlatBufferBuilder &fbb, flatbuffers::Offset<API::Msg> root)
    {
        fbb.Finish(root);
    }

}  // namespace API

#endif  // FLATBUFFERS_GENERATED_API_API_H_
