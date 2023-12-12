#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Hra();
void North();
void West();
void South();
void East();

int main(int argc, char *argv[])
{
    Hra();
    return 0;
}

void Hra()
{

    //nastavení konzole
    printf("\033[0;32m");
    printf("\nPište pouze čísla bez mezer");
    printf("\nVítej dobrodruhu!!\nVítej na své cestě.\nTvojím úkolem je se dostat domů.\n\nStojíš uprostřed ničeho, jenom tráva a květiny, vůbec nevíš kde jsi.\nJsi vyčerpaný a zmatený. Jediné co si pamatuješ, je jak vypadá tvůj domov.\nZ nějakého podivného důvodu, vůbec nevíš kdo vlastně jsi.\nAni nevíš jak se jmenuješ. Zdá se že jsi z velké části ztratil pamět.\nHlavní teď je, aby si se dostal domů.     \nKde chceš jít?\n\n1.Sever\n2.Jih\n3.Východ\n4.Západ");
    printf("\nOdpověď:");
    int směr;
    scanf("%d", &směr);

    switch (směr)
    {
    case 1:
        system("clear");
        North();
        printf("\nChceš hrát znovu?\n1.ANO nebo 2.NE");
        int odpoeeeeeeev;
        scanf("%d", &odpoeeeeeeev);
        if (odpoeeeeeeev == 1)
        {
            system("clear");
            Hra();
        }
        else
        {
            printf("Bye");
        }

        break;

    case 4:
        system("clear");
        West();
        printf("\nChceš hrát znovu?\n1.ANO nebo 2.NE");
        int odpoeeeeeev;
        scanf("%d", &odpoeeeeeev);
        if (odpoeeeeeev == 1)
        {

            system("clear");
            Hra();
        }
        else
        {
            printf("Bye");
        }
        break;

    case 2:
        system("clear");
        South();
        printf("\nChceš hrát znovu?\n1.ANO nebo 2.NE");
        int odpoeeeeeeeev;
        scanf("%d", &odpoeeeeeeeev);
        if (odpoeeeeeeeev == 1)
        {

            system("clear");
            Hra();
        }
        else
        {
            printf("Bye");
        }
        break;

    case 3:
        system("clear");
        East();
        printf("\nChceš hrát znovu?\n1.ANO nebo2. NE");
        int odpoeeeeev;
        scanf("%d", &odpoeeeeev);
        if (odpoeeeeev == 1)
        {

            system("clear");
            Hra();
        }
        else
        {
            printf("Bye!!!!");
        }

        break;
    } //switch
}
void North()
{
    //generátor lokací Sever
    srand(time(NULL));
    int nN = rand() % 3 + 1;

    switch (nN)
    {
    case 1:
        printf("\nDošel jsi k cestě\nKam jdeš?\n1.Do prava\n2.Do leva");

        printf("\nOdpověď");
        int odpověď;
        scanf("%d", &odpověď);

        if (odpověď == 1)
        {
            printf("\nZdá se že prává je dobrá!!! Bezpečně jsi dorazil domů.\n\nGG to bylo rychlé");
        }
        else
        {
            printf("\nZdá se že levá, není ta pravá cesta :)\nBohužel tě zajala a zabila skupinka elfů, bojující za práva své rasy.\nPotom co tě zabili, ti usekli hlavu a dali ji na kopí před jejich tábor, jako výstrahu pro nezvané hosty:)\n\n Jaká to užitečná smrt! ");
        }

        break;

    case 2:
        printf("\nNarazil jsi na malou vesnici\nCo uděláš?\n1. Půjdu se zeptat někoho náhodného na ulici\n2. Půjdu do hospody");

        printf("\nOdpověď:  ");
        int odpověd;
        scanf("%d", &odpověd);

        if (odpověd == 1)
        {
            printf("\n\n¨Promiňte pane, mé jméno je Sam a tak trochu jsem se ztratil.\nNemůžu najít cestu domů, mohl by jste mi řct kde to jsem?.¨\n\nPotom co jsi dořekl poslední větu, vesničan nasadil šokovanou grimasu.\n\n¨Já tě znám, ty jsi ten úžasný Čaroděj Samuel!!!! Jste ve království krále Klacka, pojďte ke mě domů, kde mám mapu.¨\n\nUkázal ti cestu kudy jít ale když jsi chtěl poděkovat a odejít, tak ti navrhl aby jsi u něj přes noc zůstal, protože venku, takhle pozdě není bezpečno.\nŘíkáš si že trocha odpočinku by bodla a navíc by jsi mohl i v klidu popřemýšlet o tom co se vlastně stalo.\nA tak jsi souhlasil.\nŘekl ti ,své jméno (George),že ti připraví jídlo a že si zatím můžeš lehnout do postele kterou ti ukázal.\nŠel jsi spát a asi tě George probudil, že už je jídlo hotové.\nVstal jsi a najedl se, jídlo bylo výborné.\nChvilku potom co jsi dojedl ti George řekl ať jdeš za ním, že chtěl taky zkoušet magii a zatím ji zkoušel jen v jeho sklepě.\nA tak jsi ho následoval s myšlenkou, že možná získáš spolupracovníka nebo aspoň poskoka.\nHned jak jsi dorazil dolů, zavřel George za tebou dveře.\n\n¨Co se to děje?¨ řekl jsi. \n\n¨Víš v téhle vesnici jsme dlouho hladověli a tak jsme museli pojídat pocestné, teď už to sice dělat nemusíme, ale abych pravdu řekl,tak čarodějě jsme ještě neměli.¨\n\nA hned poté tě zabil, zpravocal tvé maso a prodával ho na místním trhu.\nI s tím že si kousek masa nechal pro sebe na horší časy.\n\nJak nešťastná to náhoda, ta vesnice vypadala tak neškodně :)");
        }
        else
        {
            printf("\nLidé tě poznali hned poznali a ukázali ti cestu domů.\n\nJak to milí vesnička že? ŽE!? :) ");
        }

        break;
    } //switch
}

void West()
{

    srand(time(NULL));
    int nW = rand() % 3 + 1;

    switch (nW)
{
    case 1:
        printf("\nPo pár hodinách chození jsi narazil na brány Azerotu.\nAzerot jakožto město veliké a světové, je podle tvých vzpomínek, v království ve kterém je naštěstí i tvůj domov.\nAkorát tak trošku nevíš kde přesně se vidat protože v Azerotu jsi nikdy nebyl a na odemknutí dalších vzpomínek by jsi potřeboval mapu.\nA tak jsi se rozhodl že vstoupíš do města a zkusíš vyhledat pomoc.\nNyní je tvůj vedlejší úkol, najít mapu království. Kam jdeš?\n\n1.Jít do hospody\n2.Jít za kupcem \n");
        printf("\nOdpověď: ");
        int odpoveiedi;
        scanf("%d", &odpoveiedi);

        if (odpoveiedi == 1)
        {
            printf("\nVstoupil jsi do hospody kde jsi, na stěně hned uviděl mapu.\nPřečetl si si ji a víš kudy domů.\nTeď už to bude brnkačka se dostat domů.\n\nDobře ty, hned jak jsi se dostal domů tak jsi začal zjišťovat proč si se ocitl uprostřed ničeho bez vzpomínek. :)\n");
        }
        else
        {
            printf("\nU obchodník jsi nic nenašel, a tak jsi šel do hospody.\nVstoupil jsi do hospody kde jsi, na stěně hned uviděl mapu.\nPřečetl si si ji a víš kudy domů.\nTeď už to bude brnkačka se dostat domů.\n\nDobře ty, hned jak jsi se dostal domů tak jsi začal zjišťovat proč si se ocitl uprostřed ničeho bez vzpomínek. :)\n");
        }

        break;

    case 2:
        printf("\nPo asi 15 minutách chůze jsi došel ke starému, rozpadlému domu.\nKdyž jsi vešel dovnitř, uviděl jsi studnu.\nPři bližším průzkumu jsi zjístil že je v ní i voda.\nZ ničeho nic slyším své jméno, šeptem vyslovené.\n\nSame-e-e-e-e\nSame-e-e-e-e\n\nKdyž v tom jsi v hladině uviděl sebe, jak stojíš před velkým domem.\nVypadá to, že by tě ta studna mohla dostat domů.\n\n1.Skočit do studny\n2.Odejít ze stodoly a najít jinou cestu domů\n");
        printf("\nOdpověď: ");
        int odpoveidasjd;
        scanf("%d", &odpoveidasjd);

        if (odpoveidasjd == 1)
        {
            printf("\nSkočil jsi do studny a vzápětí jsi se objevil v temnotě s spousty světly.\nDoslova jsi lítat, necítil jsi žádnou tíhu.\nKdyž jsi tam tak poletoval, tak ti došlo že toto místo vypadá, jako noční obloha.\nŘíkal sis, že \n");
        }

        break;

}//switch
}//static void West



void South()
{
    srand(time(NULL)); //initialize random seed
    int nS = rand() % 2 + 1; //generate random number between 1 and 3

    switch (nS)
    {
        case 1:
        printf("\nPo chvíli chození si našel les, ale ne ledajaký les. Tento les už jen vypadal těmně a nebezpečně.\nVracet se nechceš ale kdyby jsi šel podél lesa tak možná něco najdeš.\nAvšak kdyby jsi šel hned přes les, tak by si si pravděpodobně ušetřil dalekou a únavnou cestu.\nA navíc se zdá že vidíš stezku.\nRozhodnutí je na tobě.\n\n1.Půjdu přes temný les\n2.Obejdu temný les\n");
        printf("\n\nOdpověď:");
        int odpov;
        scanf("%d", &odpov);
        if (odpov == 1)
        {
            printf("\nŠel jsi po stezke. Když se díváš kolem, tak vidíš sochy.\nVypadají jako elfské.\nA tak jsi po stezce šel a šel a šel.\nAž po velmi dlouhé době, kdy jsi už si připadáš jako zdrogovaný, jsi zjístil, že jsi ztratil stezku.\n\n¨A sakra, tady je něco špatně¨ říkáš si.\n\nJak tak jdeš lesem a snažíš se najít stezku, tak usneš\n");
            Elfové();
        
        }//if statement
        else
        {
            printf("\nZkoušel jsi ten les obejít, ale bohužel ten les se zdá.....nekonečný.\nPořád se zdálo že jsi blízko.\nI ve tvých posledních momentech smrti.\n\nAle tak zas tak velký ten les nemůže být, že? :)\n");
        }
        
        break;
    }
}

static void Elfové()
{
    printf("\nNajednou jsi se objevil v pavučině.\nZdá se, že když si usnul, tak si tě všimli obří pavouci a zabalili tě do pavučiny, aby tě mohl za nějakou chvíli sníst.\nCo děláš?\n\n1.Zkusit se dostat z pavučiny\n2.Zkusím počkat na správnou chvíli\n");
    printf("\n\nOdpověď:");
    int odpoved;
    scanf("%d", &odpoved);

    switch (odpoved)
    {
        case 1:
            printf("\nZkusil jsi se dostat z pavučiny ale moc to nešlo.\nJak jsi tak sebou cloumal, ucítil jsi ostří.\nZdá se že jsi měl celou dobu u sebe dýku.\nA tak jsi se dostal z pavučiny a spadl jsi na do další pavučiny na které jsi už ale mohl chodit.\nAvšak v té chvíli k tobě přiběhlo asi 5 pavouků a i když máš u sebe dýku, tak ta proti přesile 1:5 vážně nestačí.\nPavouci tě porazily a zemřel jsi.\n\nDěkuji za hraní :)\n");
            break;

        case 2:
            printf("\nMezitím co jsi čekal, tak jsi také zkusil jestli nemáš něco u sebe, něco co by se hodilo.\nNašel jsi menší meč!!!\nAvšak nepoužil jsi ho hned a radši jsi počkal na zprávnou chvíli.\nPo asi 15 minutách jsi slyšel jak se něco blíží.\nTeď už je to blízko.\nSlyšíš jak je ta věc přímo nad tebou a tak bodneš.\nTvůj meč se zasekl v té věci a hned poté následoval těžký pád na zem.\nKDyž jsi se vymotal z pavučiny a spárů příšery, zjístil jsi že to byl doopravdy obří pavouk.\nAvšak najednou slyšíš jak se k tobě blíží další.\nPrvnímu jsi se vyhl ale druhý tě málem měl, ale najednou ta se ta příšera zastavila. Byla zabita.\n Najednou se všechno semlelo tak rychle, že víš pouze to jak na tebe teď míří 15 elfů svými luky.\nSlyšíš jak něco povídají¨Ceri ú belth hon, Ho has na glenn with ammen¨.\nZdá se že by jsi měl jít s nimi a tak jdeš, protože co jiného ti zbývá.\n");
            printf("\nNyní jsi v elfském království.\n\nElfové tě zavedli ke, jak se zdá, jejich králi.¨Vítej cizinče, čemu já vděčím za tvoji přítomnost?¨\n");
            printf("\n¨Omlouvám se ale, tak trochu jsem ztratil cestu a nevím kudy domů. Nechtěl jsem nijak narušovat vaše království.¨\n");
            printf("\n¨A jak můžeme vědět, že nejsi nějaký špeh z jiného království?¨\n");
            printf("\n¨To nemám bohužel, jak dokázat. Prosím věřte mi, ztratil jsem se a chci jen domů¨\n");
            printf("\n¨Do žaláře s ním. At si tam zhnije, stejně nemám lidi rád.¨\n");
            printf("\nA nějak takhle jsi se dostal do elfského žaláře. Samozřejmě, že tady ale nechceš být na pořád, že? :)\nTvoje cela je málá, odhadem takové dobré 2 m².\nNa zemi je šutr který by se mohl hodit.\nZámek tvé cely vypadá, že by se mohl jednoduše rozbít nejakým předmětem, když dobře zasáhneš. Avšak pokud budeš činit takhle, tak by to mohlo přilákat stráže\nA nebo můžeš zkusit přivolat stráže a v momentě kdyby se dostali blízko tak by jsi je mohl omráčit a vzít jim jejich věci.\nCo uděláš?\n\n1.Rozbít zámek\n2.Přivolat stráže\n");
            int odpovved;
            scanf("%d", &odpovved);

            if (odpovved == 1)
            {
                printf("\nRozbil jsi  zámek své cely, jak jsme však předpokládali tak jsi přivolal stráže.\nNyní máš 2 možnosti, jít dolů kde by jsi mohl hned utéct a nebo zkusti jít nahoru, vyhnout se strážím, vzít si svoje věci a s trochou štěstí utéct. :)\n\nNAHORU nebo DOLŮ\n");
                printf("\n");
                Útěk1();
            }
            else
{
    printf("Povedlo se. Akorát Stráže neměli nic jsi u něj nenašel. Jak to zjístili další stráže, tak tě zabili.\n\nV posledních momentech svého života jsi si říkal ¨kéž bych tak rozbil ten zámek¨ :)\n");

}

break;
}
}
static void Útěk1()
{
    int odpoeeev;
    scanf("%d", &odpoeeev);

    switch (odpoeeev)
    {
        case 1:
            printf("\nJsi dole ale slyšíš stráže, a tak se rychle schováš.\nDobrá práce, vůbec si tě nevšimli, teď ti jen zbývá aby jsi odtud utekl.\nJdeš stále dolů až z ničeho nic jsi spatřil barely na platformě vedlee které je páka. Vypadá to jako jedna možnost jak pryč.\nJinak vydíš nějaké elfy kteří spí, možná by jsi je mohl okrást a získat třeba klíč od dveří ven.\n\n1.Zatáhnout za páku\n2.Okrást elfy \n");
            int odp;
            scanf("%d", &odp);

            if (odp == 1)
            {
                printf("\nZatáhl jsi za páku, polovina platformy se zvedla a prázdné sudy začali padat.\nJelikož rychle myslíš, tak jsi skočil za sudy.\nDopadl jsi do vody, rychle jsi vylezl do jednoho sudu a teď jedeš po řece v sudu. Máš štěstí že elfové nehlídají řeku.\nPo chvíli ploutí po řece v sudu jsi vystoupil na souši.\nA najednou BOOM a dům je tady. Našel jsi cestu domů.\n\nZa mě zábava, ne? :)\n");
            }

            else
            {
                printf("\nZkoušel jsi okrást elfi ale nevyšlo to.\nAsi z tebe nikdy nebyl a hlavně nikdy ani nebude zloděj, protože teď tě elfové zavřeli na doživotí do žaláře.\nŽalář je pevnější a teď jsou u tebe i stráže.\n\nZdá se že tohle je konec. Ale i tak to byla zábava, ne? :)\n");
            }

            break;

        case 2:
            printf("\nVypadá to že jsi opravdu dobrý ve skrývání.\nElfové o tobě ani neveděli a teď jsi zázračně našel cestu ke svým věcem.\nMáš u sebe svoji róbu, menším meč, kápi a zdá se že jsi u sebe měl i malou dýku a trošku peněz.\nVše jsi vzal. Co teď, buď můžeš jít dolů a zkusit se podívat jeslti není úniková cesta někde dole a nebo se můžeš zkusit proplížit hlavní hlavní branou pryč.\nAle pokud chceš jít přes hlavní dveře, tak budeš muset bojovat.\n\n1.Dolů\n2.Zkusím se probojovat\n");
            int odpo;
            scanf("%d", &odpo);
            if (odpo == 1)
            {
                printf("\nVelkým zázrakem s trochou štěstí a umu jsi se dostal až k hlavní dveřím, ale teď budeš muset bojovat proti dvoum elfům kteří je hlídají.\nPrvní se na tebe vrhne a švyhne ze zhora, mezitím co ten druhý se snaží zavřít dveře.\nTy se jednoduše vyhneš a začneš po elfovi vrhat rány o sto šest.\nElf je však zkušený a všemu se vyhýbá.\nNa poslední chvíli se zaměříš na druhého elfa, bodáš ho přímo do zad, když se snaží zavřít dveře.\nNestíhal jsi vytáhnout svůj meč z mrtvoli a tak jsi uhnul do zadu elfově ráně a následně jsi ho i skopl.\nElf to nečekal. Mezitím co se válel na zemi tak jsi sebral svůj meč a připravil se na boj.\nElf se zvedl a když jste byli připraveni po sobě jít, tak se z ničeho nic elf zastavil a padl.\nNěkdo ho střelil. Ten někdo byl tvůj přítel hraničář Frodo.\nNevěděl jsi co se děje ale jak zařval ¨Za mnou!!!¨ tak jsi za svým přítelem běžel.\nZa vámi šlo slyšet jak po vás jdou elfové ale Frodo měl připravené dva koně a tak jsi nasedl a utekl.\n\nDostal jsi se domů. Avšak proř se z ničeho nic objevil Frodo na takovém místě?\n");
            }
            else
            {
                printf("\nŠel jsi dolů ale při cestě tě zastihli stráže. První 2 jsi zkušeně zabil ale byla to přesila 5:1 takže tě bohužel zabili.\n\nŠtěstí je proti tobě zdá se :)\n");
            }
            break;

    }
}

static void East()
{
    srand(time(NULL)); //initialize random seed
    int nE = rand() % 2 + 1; //generate random number between 1 and 3

    switch (nE)
    {
        case 1:
            printf("\nPo pár hodinách chůze jsi zázračně došel domů.\n\nGG dobrý práce :)\n");
            break;

        case 2:
            printf("\nPo asi hodince ťapání jsi našel cestu i s kupcem který ti tal mapu tohoto království!\nJak jsi uviděl mapu, tak si si hned vzpomenul kde to jsi a došel jsi domů.\n\nDobrá práce, akorát je ve vzduchu furt jedna otázka.\nCo jsi saktra dělal tam venku uprostřed ničeho? :) \n");
            break;

    }//switch
}