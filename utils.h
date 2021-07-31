#include<bits/stdc++.h>

#define COMMA ,
#define NODE_FUNC(node, call, args) switch(static_cast<node_t*>(node)->num_elements) { \
    case 0:return static_cast<node_x_t<0>*>(node)->call(args);break; \
    case 1:return static_cast<node_x_t<1>*>(node)->call(args);break; \
    case 2:return static_cast<node_x_t<2>*>(node)->call(args);break; \
    case 3:return static_cast<node_x_t<3>*>(node)->call(args);break; \
    case 4:return static_cast<node_x_t<4>*>(node)->call(args);break; \
    case 5:return static_cast<node_x_t<5>*>(node)->call(args);break; \
    case 6:return static_cast<node_x_t<6>*>(node)->call(args);break; \
    case 7:return static_cast<node_x_t<7>*>(node)->call(args);break; \
    case 8:return static_cast<node_x_t<8>*>(node)->call(args);break; \
    case 9:return static_cast<node_x_t<9>*>(node)->call(args);break; \
    case 10:return static_cast<node_x_t<10>*>(node)->call(args);break; \
    case 11:return static_cast<node_x_t<11>*>(node)->call(args);break; \
    case 12:return static_cast<node_x_t<12>*>(node)->call(args);break; \
    case 13:return static_cast<node_x_t<13>*>(node)->call(args);break; \
    case 14:return static_cast<node_x_t<14>*>(node)->call(args);break; \
    case 15:return static_cast<node_x_t<15>*>(node)->call(args);break; \
    case 16:return static_cast<node_x_t<16>*>(node)->call(args);break; \
    case 17:return static_cast<node_x_t<17>*>(node)->call(args);break; \
    case 18:return static_cast<node_x_t<18>*>(node)->call(args);break; \
    case 19:return static_cast<node_x_t<19>*>(node)->call(args);break; \
    case 20:return static_cast<node_x_t<20>*>(node)->call(args);break; \
    case 21:return static_cast<node_x_t<21>*>(node)->call(args);break; \
    case 22:return static_cast<node_x_t<22>*>(node)->call(args);break; \
    case 23:return static_cast<node_x_t<23>*>(node)->call(args);break; \
    case 24:return static_cast<node_x_t<24>*>(node)->call(args);break; \
    case 25:return static_cast<node_x_t<25>*>(node)->call(args);break; \
    case 26:return static_cast<node_x_t<26>*>(node)->call(args);break; \
    case 27:return static_cast<node_x_t<27>*>(node)->call(args);break; \
    case 28:return static_cast<node_x_t<28>*>(node)->call(args);break; \
    case 29:return static_cast<node_x_t<29>*>(node)->call(args);break; \
    case 30:return static_cast<node_x_t<30>*>(node)->call(args);break; \
    case 31:return static_cast<node_x_t<31>*>(node)->call(args);break; \
    case 32:return static_cast<node_x_t<32>*>(node)->call(args);break; \
    case 33:return static_cast<node_x_t<33>*>(node)->call(args);break; \
    case 34:return static_cast<node_x_t<34>*>(node)->call(args);break; \
    case 35:return static_cast<node_x_t<35>*>(node)->call(args);break; \
    case 36:return static_cast<node_x_t<36>*>(node)->call(args);break; \
    case 37:return static_cast<node_x_t<37>*>(node)->call(args);break; \
    case 38:return static_cast<node_x_t<38>*>(node)->call(args);break; \
    case 39:return static_cast<node_x_t<39>*>(node)->call(args);break; \
    case 40:return static_cast<node_x_t<40>*>(node)->call(args);break; \
    case 41:return static_cast<node_x_t<41>*>(node)->call(args);break; \
    case 42:return static_cast<node_x_t<42>*>(node)->call(args);break; \
    case 43:return static_cast<node_x_t<43>*>(node)->call(args);break; \
    case 44:return static_cast<node_x_t<44>*>(node)->call(args);break; \
    case 45:return static_cast<node_x_t<45>*>(node)->call(args);break; \
    case 46:return static_cast<node_x_t<46>*>(node)->call(args);break; \
    case 47:return static_cast<node_x_t<47>*>(node)->call(args);break; \
    case 48:return static_cast<node_x_t<48>*>(node)->call(args);break; \
    case 49:return static_cast<node_x_t<49>*>(node)->call(args);break; \
    case 50:return static_cast<node_x_t<50>*>(node)->call(args);break; \
    case 51:return static_cast<node_x_t<51>*>(node)->call(args);break; \
    case 52:return static_cast<node_x_t<52>*>(node)->call(args);break; \
    case 53:return static_cast<node_x_t<53>*>(node)->call(args);break; \
    case 54:return static_cast<node_x_t<54>*>(node)->call(args);break; \
    case 55:return static_cast<node_x_t<55>*>(node)->call(args);break; \
    case 56:return static_cast<node_x_t<56>*>(node)->call(args);break; \
    case 57:return static_cast<node_x_t<57>*>(node)->call(args);break; \
    case 58:return static_cast<node_x_t<58>*>(node)->call(args);break; \
    case 59:return static_cast<node_x_t<59>*>(node)->call(args);break; \
    case 60:return static_cast<node_x_t<60>*>(node)->call(args);break; \
    case 61:return static_cast<node_x_t<61>*>(node)->call(args);break; \
    case 62:return static_cast<node_x_t<62>*>(node)->call(args);break; \
    case 63:return static_cast<node_x_t<63>*>(node)->call(args);break; \
    case 64:return static_cast<node_x_t<64>*>(node)->call(args);break; \
    case 65:return static_cast<node_x_t<65>*>(node)->call(args);break; \
    case 66:return static_cast<node_x_t<66>*>(node)->call(args);break; \
    case 67:return static_cast<node_x_t<67>*>(node)->call(args);break; \
    case 68:return static_cast<node_x_t<68>*>(node)->call(args);break; \
    case 69:return static_cast<node_x_t<69>*>(node)->call(args);break; \
    case 70:return static_cast<node_x_t<70>*>(node)->call(args);break; \
    case 71:return static_cast<node_x_t<71>*>(node)->call(args);break; \
    case 72:return static_cast<node_x_t<72>*>(node)->call(args);break; \
    case 73:return static_cast<node_x_t<73>*>(node)->call(args);break; \
    case 74:return static_cast<node_x_t<74>*>(node)->call(args);break; \
    case 75:return static_cast<node_x_t<75>*>(node)->call(args);break; \
    case 76:return static_cast<node_x_t<76>*>(node)->call(args);break; \
    case 77:return static_cast<node_x_t<77>*>(node)->call(args);break; \
    case 78:return static_cast<node_x_t<78>*>(node)->call(args);break; \
    case 79:return static_cast<node_x_t<79>*>(node)->call(args);break; \
    case 80:return static_cast<node_x_t<80>*>(node)->call(args);break; \
    case 81:return static_cast<node_x_t<81>*>(node)->call(args);break; \
    case 82:return static_cast<node_x_t<82>*>(node)->call(args);break; \
    case 83:return static_cast<node_x_t<83>*>(node)->call(args);break; \
    case 84:return static_cast<node_x_t<84>*>(node)->call(args);break; \
    case 85:return static_cast<node_x_t<85>*>(node)->call(args);break; \
    case 86:return static_cast<node_x_t<86>*>(node)->call(args);break; \
    case 87:return static_cast<node_x_t<87>*>(node)->call(args);break; \
    case 88:return static_cast<node_x_t<88>*>(node)->call(args);break; \
    case 89:return static_cast<node_x_t<89>*>(node)->call(args);break; \
    case 90:return static_cast<node_x_t<90>*>(node)->call(args);break; \
    case 91:return static_cast<node_x_t<91>*>(node)->call(args);break; \
    case 92:return static_cast<node_x_t<92>*>(node)->call(args);break; \
    case 93:return static_cast<node_x_t<93>*>(node)->call(args);break; \
    case 94:return static_cast<node_x_t<94>*>(node)->call(args);break; \
    case 95:return static_cast<node_x_t<95>*>(node)->call(args);break; \
    case 96:return static_cast<node_x_t<96>*>(node)->call(args);break; \
    case 97:return static_cast<node_x_t<97>*>(node)->call(args);break; \
    case 98:return static_cast<node_x_t<98>*>(node)->call(args);break; \
    case 99:return static_cast<node_x_t<99>*>(node)->call(args);break; \
    case 100:return static_cast<node_x_t<100>*>(node)->call(args);break; \
    case 101:return static_cast<node_x_t<101>*>(node)->call(args);break; \
    case 102:return static_cast<node_x_t<102>*>(node)->call(args);break; \
    case 103:return static_cast<node_x_t<103>*>(node)->call(args);break; \
    case 104:return static_cast<node_x_t<104>*>(node)->call(args);break; \
    case 105:return static_cast<node_x_t<105>*>(node)->call(args);break; \
    case 106:return static_cast<node_x_t<106>*>(node)->call(args);break; \
    case 107:return static_cast<node_x_t<107>*>(node)->call(args);break; \
    case 108:return static_cast<node_x_t<108>*>(node)->call(args);break; \
    case 109:return static_cast<node_x_t<109>*>(node)->call(args);break; \
    case 110:return static_cast<node_x_t<110>*>(node)->call(args);break; \
    case 111:return static_cast<node_x_t<111>*>(node)->call(args);break; \
    case 112:return static_cast<node_x_t<112>*>(node)->call(args);break; \
    case 113:return static_cast<node_x_t<113>*>(node)->call(args);break; \
    case 114:return static_cast<node_x_t<114>*>(node)->call(args);break; \
    case 115:return static_cast<node_x_t<115>*>(node)->call(args);break; \
    case 116:return static_cast<node_x_t<116>*>(node)->call(args);break; \
    case 117:return static_cast<node_x_t<117>*>(node)->call(args);break; \
    case 118:return static_cast<node_x_t<118>*>(node)->call(args);break; \
    case 119:return static_cast<node_x_t<119>*>(node)->call(args);break; \
    case 120:return static_cast<node_x_t<120>*>(node)->call(args);break; \
    case 121:return static_cast<node_x_t<121>*>(node)->call(args);break; \
    case 122:return static_cast<node_x_t<122>*>(node)->call(args);break; \
    case 123:return static_cast<node_x_t<123>*>(node)->call(args);break; \
    case 124:return static_cast<node_x_t<124>*>(node)->call(args);break; \
    case 125:return static_cast<node_x_t<125>*>(node)->call(args);break; \
    case 126:return static_cast<node_x_t<126>*>(node)->call(args);break; \
    case 127:return static_cast<node_x_t<127>*>(node)->call(args);break; \
    case 128:return static_cast<node_x_t<128>*>(node)->call(args);break; \
    case 129:return static_cast<node_x_t<129>*>(node)->call(args);break; \
    case 130:return static_cast<node_x_t<130>*>(node)->call(args);break; \
    case 131:return static_cast<node_x_t<131>*>(node)->call(args);break; \
    case 132:return static_cast<node_x_t<132>*>(node)->call(args);break; \
    case 133:return static_cast<node_x_t<133>*>(node)->call(args);break; \
    case 134:return static_cast<node_x_t<134>*>(node)->call(args);break; \
    case 135:return static_cast<node_x_t<135>*>(node)->call(args);break; \
    case 136:return static_cast<node_x_t<136>*>(node)->call(args);break; \
    case 137:return static_cast<node_x_t<137>*>(node)->call(args);break; \
    case 138:return static_cast<node_x_t<138>*>(node)->call(args);break; \
    case 139:return static_cast<node_x_t<139>*>(node)->call(args);break; \
    case 140:return static_cast<node_x_t<140>*>(node)->call(args);break; \
    case 141:return static_cast<node_x_t<141>*>(node)->call(args);break; \
    case 142:return static_cast<node_x_t<142>*>(node)->call(args);break; \
    case 143:return static_cast<node_x_t<143>*>(node)->call(args);break; \
    case 144:return static_cast<node_x_t<144>*>(node)->call(args);break; \
    case 145:return static_cast<node_x_t<145>*>(node)->call(args);break; \
    case 146:return static_cast<node_x_t<146>*>(node)->call(args);break; \
    case 147:return static_cast<node_x_t<147>*>(node)->call(args);break; \
    case 148:return static_cast<node_x_t<148>*>(node)->call(args);break; \
    case 149:return static_cast<node_x_t<149>*>(node)->call(args);break; \
    case 150:return static_cast<node_x_t<150>*>(node)->call(args);break; \
    case 151:return static_cast<node_x_t<151>*>(node)->call(args);break; \
    case 152:return static_cast<node_x_t<152>*>(node)->call(args);break; \
    case 153:return static_cast<node_x_t<153>*>(node)->call(args);break; \
    case 154:return static_cast<node_x_t<154>*>(node)->call(args);break; \
    case 155:return static_cast<node_x_t<155>*>(node)->call(args);break; \
    case 156:return static_cast<node_x_t<156>*>(node)->call(args);break; \
    case 157:return static_cast<node_x_t<157>*>(node)->call(args);break; \
    case 158:return static_cast<node_x_t<158>*>(node)->call(args);break; \
    case 159:return static_cast<node_x_t<159>*>(node)->call(args);break; \
    case 160:return static_cast<node_x_t<160>*>(node)->call(args);break; \
    case 161:return static_cast<node_x_t<161>*>(node)->call(args);break; \
    case 162:return static_cast<node_x_t<162>*>(node)->call(args);break; \
    case 163:return static_cast<node_x_t<163>*>(node)->call(args);break; \
    case 164:return static_cast<node_x_t<164>*>(node)->call(args);break; \
    case 165:return static_cast<node_x_t<165>*>(node)->call(args);break; \
    case 166:return static_cast<node_x_t<166>*>(node)->call(args);break; \
    case 167:return static_cast<node_x_t<167>*>(node)->call(args);break; \
    case 168:return static_cast<node_x_t<168>*>(node)->call(args);break; \
    case 169:return static_cast<node_x_t<169>*>(node)->call(args);break; \
    case 170:return static_cast<node_x_t<170>*>(node)->call(args);break; \
    case 171:return static_cast<node_x_t<171>*>(node)->call(args);break; \
    case 172:return static_cast<node_x_t<172>*>(node)->call(args);break; \
    case 173:return static_cast<node_x_t<173>*>(node)->call(args);break; \
    case 174:return static_cast<node_x_t<174>*>(node)->call(args);break; \
    case 175:return static_cast<node_x_t<175>*>(node)->call(args);break; \
    case 176:return static_cast<node_x_t<176>*>(node)->call(args);break; \
    case 177:return static_cast<node_x_t<177>*>(node)->call(args);break; \
    case 178:return static_cast<node_x_t<178>*>(node)->call(args);break; \
    case 179:return static_cast<node_x_t<179>*>(node)->call(args);break; \
    case 180:return static_cast<node_x_t<180>*>(node)->call(args);break; \
    case 181:return static_cast<node_x_t<181>*>(node)->call(args);break; \
    case 182:return static_cast<node_x_t<182>*>(node)->call(args);break; \
    case 183:return static_cast<node_x_t<183>*>(node)->call(args);break; \
    case 184:return static_cast<node_x_t<184>*>(node)->call(args);break; \
    case 185:return static_cast<node_x_t<185>*>(node)->call(args);break; \
    case 186:return static_cast<node_x_t<186>*>(node)->call(args);break; \
    case 187:return static_cast<node_x_t<187>*>(node)->call(args);break; \
    case 188:return static_cast<node_x_t<188>*>(node)->call(args);break; \
    case 189:return static_cast<node_x_t<189>*>(node)->call(args);break; \
    case 190:return static_cast<node_x_t<190>*>(node)->call(args);break; \
    case 191:return static_cast<node_x_t<191>*>(node)->call(args);break; \
    case 192:return static_cast<node_x_t<192>*>(node)->call(args);break; \
    case 193:return static_cast<node_x_t<193>*>(node)->call(args);break; \
    case 194:return static_cast<node_x_t<194>*>(node)->call(args);break; \
    case 195:return static_cast<node_x_t<195>*>(node)->call(args);break; \
    case 196:return static_cast<node_x_t<196>*>(node)->call(args);break; \
    case 197:return static_cast<node_x_t<197>*>(node)->call(args);break; \
    case 198:return static_cast<node_x_t<198>*>(node)->call(args);break; \
    case 199:return static_cast<node_x_t<199>*>(node)->call(args);break; \
    case 200:return static_cast<node_x_t<200>*>(node)->call(args);break; \
    case 201:return static_cast<node_x_t<201>*>(node)->call(args);break; \
    case 202:return static_cast<node_x_t<202>*>(node)->call(args);break; \
    case 203:return static_cast<node_x_t<203>*>(node)->call(args);break; \
    case 204:return static_cast<node_x_t<204>*>(node)->call(args);break; \
    case 205:return static_cast<node_x_t<205>*>(node)->call(args);break; \
    case 206:return static_cast<node_x_t<206>*>(node)->call(args);break; \
    case 207:return static_cast<node_x_t<207>*>(node)->call(args);break; \
    case 208:return static_cast<node_x_t<208>*>(node)->call(args);break; \
    case 209:return static_cast<node_x_t<209>*>(node)->call(args);break; \
    case 210:return static_cast<node_x_t<210>*>(node)->call(args);break; \
    case 211:return static_cast<node_x_t<211>*>(node)->call(args);break; \
    case 212:return static_cast<node_x_t<212>*>(node)->call(args);break; \
    case 213:return static_cast<node_x_t<213>*>(node)->call(args);break; \
    case 214:return static_cast<node_x_t<214>*>(node)->call(args);break; \
    case 215:return static_cast<node_x_t<215>*>(node)->call(args);break; \
    case 216:return static_cast<node_x_t<216>*>(node)->call(args);break; \
    case 217:return static_cast<node_x_t<217>*>(node)->call(args);break; \
    case 218:return static_cast<node_x_t<218>*>(node)->call(args);break; \
    case 219:return static_cast<node_x_t<219>*>(node)->call(args);break; \
    case 220:return static_cast<node_x_t<220>*>(node)->call(args);break; \
    case 221:return static_cast<node_x_t<221>*>(node)->call(args);break; \
    case 222:return static_cast<node_x_t<222>*>(node)->call(args);break; \
    case 223:return static_cast<node_x_t<223>*>(node)->call(args);break; \
    case 224:return static_cast<node_x_t<224>*>(node)->call(args);break; \
    case 225:return static_cast<node_x_t<225>*>(node)->call(args);break; \
    case 226:return static_cast<node_x_t<226>*>(node)->call(args);break; \
    case 227:return static_cast<node_x_t<227>*>(node)->call(args);break; \
    case 228:return static_cast<node_x_t<228>*>(node)->call(args);break; \
    case 229:return static_cast<node_x_t<229>*>(node)->call(args);break; \
    case 230:return static_cast<node_x_t<230>*>(node)->call(args);break; \
    case 231:return static_cast<node_x_t<231>*>(node)->call(args);break; \
    case 232:return static_cast<node_x_t<232>*>(node)->call(args);break; \
    case 233:return static_cast<node_x_t<233>*>(node)->call(args);break; \
    case 234:return static_cast<node_x_t<234>*>(node)->call(args);break; \
    case 235:return static_cast<node_x_t<235>*>(node)->call(args);break; \
    case 236:return static_cast<node_x_t<236>*>(node)->call(args);break; \
    case 237:return static_cast<node_x_t<237>*>(node)->call(args);break; \
    case 238:return static_cast<node_x_t<238>*>(node)->call(args);break; \
    case 239:return static_cast<node_x_t<239>*>(node)->call(args);break; \
    case 240:return static_cast<node_x_t<240>*>(node)->call(args);break; \
    case 241:return static_cast<node_x_t<241>*>(node)->call(args);break; \
    case 242:return static_cast<node_x_t<242>*>(node)->call(args);break; \
    case 243:return static_cast<node_x_t<243>*>(node)->call(args);break; \
    case 244:return static_cast<node_x_t<244>*>(node)->call(args);break; \
    case 245:return static_cast<node_x_t<245>*>(node)->call(args);break; \
    case 246:return static_cast<node_x_t<246>*>(node)->call(args);break; \
    case 247:return static_cast<node_x_t<247>*>(node)->call(args);break; \
    case 248:return static_cast<node_x_t<248>*>(node)->call(args);break; \
    case 249:return static_cast<node_x_t<249>*>(node)->call(args);break; \
    case 250:return static_cast<node_x_t<250>*>(node)->call(args);break; \
    case 251:return static_cast<node_x_t<251>*>(node)->call(args);break; \
    case 252:return static_cast<node_x_t<252>*>(node)->call(args);break; \
    case 253:return static_cast<node_x_t<253>*>(node)->call(args);break; \
    case 254:return static_cast<node_x_t<254>*>(node)->call(args);break; \
    case 255:return static_cast<node_x_t<255>*>(node)->call(args);break; \
}


using namespace std;
struct node_t {
    uint8_t num_elements;
};


template<std::size_t N>
struct node_x_t {
    static_assert(N <= 256, "N must be <= 256");
    node_t base;
    char chars[N];
    node_t* children[N];

    void setChild(size_t index, node_t* child, void* prev) {
        children[index] = static_cast<node_t*>(child);
    }

    node_t* setObject(int idx){
        return children[idx];
    }

    node_x_t(){

    }

    node_x_t(int num, char *a, node_t* b[],char currChar){
        base.num_elements = num+1;
        for(int i=0;i<base.num_elements-1;i++){
            chars[i] = a[i];
            children[i] = b[i];
        }
        chars[base.num_elements-1] = currChar;
        children[base.num_elements-1] = NULL;
    }

    node_t* upgrade(char key){
        const int i=N;
        return (node_t*)(new node_x_t<i+1>(base.num_elements, chars, children, key));
    }
};

node_t* assignObject(void* current, char key){
    NODE_FUNC(current, upgrade, key);
}

node_t* setObjectUtil(int index, void* nav){
    NODE_FUNC(nav, setObject, index);
}

void setChildUtil(size_t index, node_t* child, void* prev){
    NODE_FUNC(prev, setChild, index COMMA child COMMA prev);
}