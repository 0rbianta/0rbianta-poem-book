#include <jni.h>
#include <string>

using namespace std;

int str2int(string data);

extern "C"
JNIEXPORT void JNICALL
Java_com_example_a0rbiantanniirantolojisi_MainActivity_s_1proc(JNIEnv *env, jobject thiz, jstring s_num, jint view, jint title, jint content) {

    string s_num_cpp = env->GetStringUTFChars(s_num,0);

    jclass setText_class = env->FindClass("android/widget/TextView");
    jmethodID setText = env->GetMethodID(setText_class,"setText","(Ljava/lang/CharSequence;)V");

    jclass jMainActivity = env->GetObjectClass(thiz);
    jclass findviewbyid_class = env->FindClass("androidx/appcompat/app/AppCompatActivity");
    jmethodID jfindViewById = env->GetMethodID(findviewbyid_class,"findViewById", "(I)Landroid/view/View;");
    jobject poem_view = env->CallObjectMethod(thiz,jfindViewById,view);
    jobject title_view = env->CallObjectMethod(thiz,jfindViewById,title);
    jobject content_view = env->CallObjectMethod(thiz,jfindViewById,content);

    jmethodID jsetVisibility = env->GetMethodID(jMainActivity,"setVisibility","(Landroid/view/View;I)V");

    switch(str2int(s_num_cpp)) {

        case 164: { //s1

            env->CallVoidMethod(thiz, jsetVisibility, poem_view, 0);
            jstring title_data = env->NewStringUTF("Adım Sonbahar");
            jstring content_data = env->NewStringUTF("Nasıl iş bu \n"
                                                       "Her yanına çiçek yağmış \n"
                                                       "Erik ağacının \n"
                                                       "Işık içinde yüzüyor \n"
                                                       "Neresinden baksan \n"
                                                       "Gözlerin kamaşır \n"
                                                       "\n"
                                                       "Oysa ben akşam olmuşum \n"
                                                       "Yapraklarım dökülüyor \n"
                                                       "Usul usul \n"
                                                       "Adım sonbahar \n"
                                                       "Attila İlhan");


            env->CallVoidMethod(title_view, setText, title_data);
            env->CallVoidMethod(content_view, setText, content_data);

            break;
        }
        case 165: { //s2
            jmethodID jsetVisibility = env->GetMethodID(jMainActivity, "setVisibility",
                                                        "(Landroid/view/View;I)V");
            env->CallVoidMethod(thiz, jsetVisibility, poem_view, 0);

            jstring title_data = env->NewStringUTF("Böyle Bir Sevmek");
            jstring content_data = env->NewStringUTF("ne kadınlar sevdim zaten yoktular\n"
                                                       "yağmur giyerlerdi sonbaharla bir\n"
                                                       "azıcık okşasam sanki çocuktular\n"
                                                       "bıraksam korkudan gözleri sislenir\n"
                                                       "ne kadınlar sevdim zaten yoktular\n"
                                                       "böyle bir sevmek görülmemiştir\n"
                                                       "\n"
                                                       "hayır sanmayın ki beni unuttular\n"
                                                       "hala arasıra mektupları gelir\n"
                                                       "gerçek değildiler birer umuttular\n"
                                                       "eski bir şarkı belki bir şiir\n"
                                                       "ne kadınlar sevdim zaten yoktular\n"
                                                       "böyle bir sevmek görülmemiştir\n"
                                                       "\n"
                                                       "yalnızlıklarımda elimden tuttular\n"
                                                       "uzak fısıltıları içimi ürpertir\n"
                                                       "sanki gökyüzünde bir buluttular\n"
                                                       "nereye kayboldular şimdi kimbilir\n"
                                                       "ne kadınlar sevdim zaten yoktular\n"
                                                       "böyle bir sevmek görülmemiştir.");

            env->CallVoidMethod(title_view, setText, title_data);
            env->CallVoidMethod(content_view, setText, content_data);
            break;
        }
        case 166: { //s3
            jmethodID jsetVisibility = env->GetMethodID(jMainActivity, "setVisibility",
                                                        "(Landroid/view/View;I)V");
            env->CallVoidMethod(thiz, jsetVisibility, poem_view, 0);

            jstring title_data_2 = env->NewStringUTF("Harp Kaldırımında Aşk");
            jstring content_data_2 = env->NewStringUTF(" sen şimdi yanımda yepyeni bir türkü gibisin\n"
                                                       "hiç görmediğim yıldızlar gözlerine doğmuş\n"
                                                       "bir büyüklük duygusu dağlar gibi yüreğinde\n"
                                                       "ah biz mutluluğu böyle aranıp duracak mıyız\n"
                                                       "yağmur hep böyle yağacak mı hatıralara\n"
                                                       "eksik olan bir şey var sana bana dair\n"
                                                       "belki bir rüzgar belki rüzgardan da hafif\n"
                                                       "ama kalbimiz yine uzak bir deniz gibi boş\n"
                                                       "heybetli gurupların belirdiği saatlerde\n"
                                                       "\n"
                                                       "sen şimdi yanımda yepyeni bir türkü gibisin\n"
                                                       "acaba nasıl öğrenmişim nasıl farkında olmadan\n"
                                                       "her şey nasıl olup geçmiş nasıl barut yağmış\n"
                                                       "nasıl güneş vurmuş zehirlenmiş şehrin üstüne\n"
                                                       "şimdi hangi kıyılarda gemiler demir alıyor\n"
                                                       "güney rüzgarlarına açıp yelkenlerini\n"
                                                       "belki bir italyan kızı tüfeğine dayanmış\n"
                                                       "senin gibi barışı tasarlıyor dağlarda\n"
                                                       "mahzun esirler harp şarkıları kadar mahzun\n"
                                                       "gizlice talim ediyor hürriyet adımlarını\n"
                                                       "\n"
                                                       "sen şimdi yanımda yepyeni bir türkü gibisin\n"
                                                       "ah şu harp bitse rüzgar gibi bir nefes alabilsek\n"
                                                       "kimseler kimseler çıkmasa yolumuzun üstüne\n"
                                                       "yağmur yağsın varsın ıslansın saçlarımız\n"
                                                       "yalnız duyulmaz olsun göğsümüzdeki darlık\n"
                                                       "dilimizdeki kilit kolumuzdaki zincir\n"
                                                       "ömrümüz meçhullerden meçhullere akıyor\n"
                                                       "saatler bizim değil kitaplar bizim değil\n"
                                                       "bizim değil yaşamak bizim değil hiçbir şey\n"
                                                       "kendi dünyamızda yabancılar gibiyiz\n"
                                                       "ya çok erken ya çok geç doğmadık mı sevgilim\n"
                                                       "buna rağmen mutluluğa inanıyoruz");

            env->CallVoidMethod(title_view, setText, title_data_2);
            env->CallVoidMethod(content_view, setText, content_data_2);
            break;
        }
        case 167: { //s4
            jmethodID jsetVisibility = env->GetMethodID(jMainActivity, "setVisibility",
                                                        "(Landroid/view/View;I)V");
            env->CallVoidMethod(thiz, jsetVisibility, poem_view, 0);

            jstring title_data_2 = env->NewStringUTF("Geçerdi Hep");
            jstring content_data_2 = env->NewStringUTF("Geçerdi hep\n"
                                                       "Pırıltılı kanunlar\n"
                                                       "Neves gecelerden\n"
                                                       "İhtimal buhranlı gecelerdi hep\n"
                                                       "Yüreğinde yalnızlığın tortusu\n"
                                                       "Vazoda yaseminler\n"
                                                       "Ufukta yağmur kuşları\n"
                                                       "Çözülmez bilmecelerdi hep\n"
                                                       "Ansızın dalar\n"
                                                       "Bir yorgunluğa uyanırdın\n"
                                                       "Güneş çekilmiştir bahçelerden\n"
                                                       "Lambalar çok erken yanmış\n"
                                                       "Aldatılmak korkusu\n"
                                                       "Sık sık bozulan yeminler\n"
                                                       "Enfarktüs kuşkuları\n"
                                                       "Sinsi bir kederdi hep\n"
                                                       "Zaman zaman düşündüğün\n"
                                                       "Aklına geldikçe güldüğün\n"
                                                       "Şan şeref ve ün\n"
                                                       "Beyhude şeylerdi hep");

            env->CallVoidMethod(title_view, setText, title_data_2);
            env->CallVoidMethod(content_view, setText, content_data_2);
            break;
        }
        case 168: { //s5
            jmethodID jsetVisibility = env->GetMethodID(jMainActivity, "setVisibility",
                                                        "(Landroid/view/View;I)V");
            env->CallVoidMethod(thiz, jsetVisibility, poem_view, 0);

            jstring title_data_2 = env->NewStringUTF("Ağustos Çıkmazı");
            jstring content_data_2 = env->NewStringUTF("Beni koyup koyup gitme, n\\'olursun\n"
                                                       "Durduğun yerde dur\n"
                                                       "Kendini martılarla bir tutma\n"
                                                       "Senin kanatların yok\n"
                                                       "Düşersin yorulursun\n"
                                                       "Beni koyup koyup gitme, n\\'olursun\n"
                                                       "\n"
                                                       "Bir deniz kıyısında otur\n"
                                                       "Gemiler sensiz gitsin bırak\n"
                                                       "Herkes gibi yaşasana sen\n"
                                                       "İşine gücüne baksana\n"
                                                       "Evlenirsin, çocuğun olur\n"
                                                       "Beni koyup koyup gitme, n\\'olursun\n"
                                                       "\n"
                                                       "Elimi tutuyorlar ayağımı\n"
                                                       "Yetişemiyorum ardından\n"
                                                       "Hevesim olsa param olmuyor\n"
                                                       "Param olsa hevesim\n"
                                                       "Yaptıklarını affettim\n"
                                                       "Seninle gelemeyeceğim Attilâ İlhan\n"
                                                       "Beni koyup koyup gitme, n'olursun.");

            env->CallVoidMethod(title_view, setText, title_data_2);
            env->CallVoidMethod(content_view, setText, content_data_2);
            break;
        }
        case 169: { //s6
            jmethodID jsetVisibility = env->GetMethodID(jMainActivity, "setVisibility",
                                                        "(Landroid/view/View;I)V");
            env->CallVoidMethod(thiz, jsetVisibility, poem_view, 0);

            jstring title_data_2 = env->NewStringUTF("Aysel Git Başımdan");
            jstring content_data_2 = env->NewStringUTF("aysel git başımdan ben sana göre değilim\n"
                                                       "ölümüm birden olacak seziyorum\n"
                                                       "hem kötüyüm karanlığım biraz çirkinim\n"
                                                       "aysel git başımdan istemiyorum\n"
                                                       "benim yağmurumda gezinemezsin üşürsün\n"
                                                       "dağıtır gecelerim sarışınlığını\n"
                                                       "uykularımı uyusan nasıl korkarsın\n"
                                                       "hiçbir dakikamı yaşayamazsın\n"
                                                       "aysel git başımdan ben sana göre değilim\n"
                                                       "benim için kirletme aydınlığını\n"
                                                       "hem kötüyüm karanlığım biraz çirkinim\n"
                                                       "\n"
                                                       "Islığımı denesen hemen düşürürsün\n"
                                                       "gözlerim hızlandırır tenhalığını\n"
                                                       "yanlış şehirlere götürür trenlerim\n"
                                                       "ya ölmek ustalığını kazanırsın\n"
                                                       "ya korku biriktirmek yetisini\n"
                                                       "acılarım iyice bol gelir sana\n"
                                                       "sevincim bir türlü tutmaz sevincini\n"
                                                       "aysel git başımdan ben sana göre değilim\n"
                                                       "ümitsizliğimi olsun anlasana\n"
                                                       "hem kötüyüm karanlığım biraz çirkinim\n"
                                                       "\n"
                                                       "sevindiğim anda sen üzülürsün\n"
                                                       "sonbahar uğultusu duymamışsın ki\n"
                                                       "içinden bir gemi kalkıp gitmemiş\n"
                                                       "uzak yalnızlık limanlarına\n"
                                                       "aykırı bir yolcuyum dünya geniş\n"
                                                       "büyük bir kulak çınlıyor içimdeki\n"
                                                       "çetrefil yolculuğum kesinleşmiş\n"
                                                       "sakın başka bir şey getirme aklına\n"
                                                       "aysel git başımdan ben sana göre değilim\n"
                                                       "ölümüm birden olacak seziyorum\n"
                                                       "hem kötüyüm karanlığım biraz çirkinim\n"
                                                       "aysel git başımdan seni seviyorum");

            env->CallVoidMethod(title_view, setText, title_data_2);
            env->CallVoidMethod(content_view, setText, content_data_2);
            break;
        }
        case 170: { //s7
            jmethodID jsetVisibility = env->GetMethodID(jMainActivity, "setVisibility",
                                                        "(Landroid/view/View;I)V");
            env->CallVoidMethod(thiz, jsetVisibility, poem_view, 0);

            jstring title_data_2 = env->NewStringUTF("Emperyal Otel");
            jstring content_data_2 = env->NewStringUTF("Ben hiç böylesini görmemiştim\n"
                                                       "vurdun kanıma girdin itirazım var\n"
                                                       "sımsıcak bir merhaba diyecektim\n"
                                                       "başımı usulca dizine koyacaktım\n"
                                                       "dört gün dört gece susacaktım\n"
                                                       "yağmur sönecekti yanacaktı\n"
                                                       "sameland seferden dönecekti\n"
                                                       "duvardaki saat duracaktı\n"
                                                       "kalbim kendiliğinden duracaktı\n"
                                                       "ben hiç böylesini görmemiştim\n"
                                                       "vurdun kanıma girdin itirazım var\n"
                                                       "\n"
                                                       "emperyal oteli\\'nde bu sonbahar\n"
                                                       "bu camların nokta nokta hüznü\n"
                                                       "bu bizim berhava olmuşluğumuz\n"
                                                       "bir nokta bir hat kalmışlığımız\n"
                                                       "bu rezil bu çarsamba günü\n"
                                                       "intihar etmiş kötümser yapraklar\n"
                                                       "öksürüklü aksırıklı bu takvim\n"
                                                       "ben hiç böylesini görmemiştim\n"
                                                       "vurdun kanıma girdin itirazım var\n"
                                                       "\n"
                                                       "sesleri liman sislerinde boğulur\n"
                                                       "gemiler yorgun ve uykuludur\n"
                                                       "sabahtır saat beş buçuktur\n"
                                                       "sen kollarımın arasındasın\n"
                                                       "onlar gibi değilsin sen başkasın\n"
                                                       "bu senin gözlerin gibisi yoktur\n"
                                                       "adamın rüyasına rüyasına sokulur\n"
                                                       "aklının içinde siyah bir vapur\n"
                                                       "kıvranır insaf nedir bilmez\n"
                                                       "\n"
                                                       "otelin penceresinde duracaktın\n"
                                                       "şehri karanlıkta görecektin\n"
                                                       "karanlıkta yağmuru görecektin\n"
                                                       "saçların ıslanacak ıslanacaktı\n"
                                                       "kış geceleri gibi uzun uzun\n"
                                                       "tek damla gözyaşı dökmeksizin\n"
                                                       "maria dolores ağlayacaktı\n"
                                                       "istanbul\\'u yağmur tutacaktı\n"
                                                       "bütün bir gün iş arayacaktım\n"
                                                       "sana bir türkü getirecektim\n"
                                                       "kulaklarımız çınlayacaktı\n"
                                                       "\n"
                                                       "emperyal oteli\\'nin resmini çektim\n"
                                                       "akşam saçaklarından damlıyordu\n"
                                                       "kapısında durmanı söylemiştim\n"
                                                       "yüzün zambaklara benziyordu\n"
                                                       "cumhuriyet bahçesi\\'nde insanlar geziyordu\n"
                                                       "tepebaşı\\'ndaki küçük yahudiler\n"
                                                       "asmalımescit\\'teki rum kemancı\n"
                                                       "böyle rüzgarsız kalmışlığımız\n"
                                                       "bu bizim çektiğimiz sancı\n"
                                                       "el ele tutuşmuş geziyordu\n"
                                                       "gazeteler cinayeti yazıyordu\n"
                                                       "haliç\\'e bir avuç kan dökülmüştü\n"
                                                       "\n"
                                                       "emperyal oteli\\'nde üç gece kaldık\n"
                                                       "fazlasına paramız yetmiyordu\n"
                                                       "gözlerin gözlerimden gitmiyordu\n"
                                                       "dördüncü gece sokakta kaldık\n"
                                                       "karanlık bir türlü bitmiyordu\n"
                                                       "sirkeci garı\\'nda sabahladık\n"
                                                       "bilen bilmeyen bizi ayıpladı\n"
                                                       "halbu ki kimlere kimlere başvurmadık\n"
                                                       "hiçbiri yüzümüze bakmıyordu\n"
                                                       "hiç kimse elimizden tutmuyordu\n"
                                                       "ben hiç böylesini görmemiştim\n"
                                                       "vurdun kanıma girdin kabulümsün");

            env->CallVoidMethod(title_view, setText, title_data_2);
            env->CallVoidMethod(content_view, setText, content_data_2);
            break;
        }
        case 171: { //s8
            jmethodID jsetVisibility = env->GetMethodID(jMainActivity, "setVisibility",
                                                        "(Landroid/view/View;I)V");
            env->CallVoidMethod(thiz, jsetVisibility, poem_view, 0);

            jstring title_data_2 = env->NewStringUTF("Davet");
            jstring content_data_2 = env->NewStringUTF("Dörtnala gelip Uzak Asya'dan\n"
                                                       "Akdeniz'e bir kısrak başı gibi uzanan\n"
                                                       "\t\tbu memleket, bizim.\n"
                                                       "\n"
                                                       "Bilekler kan içinde, dişler kenetli, ayaklar çıplak\n"
                                                       "ve ipek bir halıya benziyen toprak,\n"
                                                       "\t\tbu cehennem, bu cennet bizim.\n"
                                                       "\n"
                                                       "Kapansın el kapıları, bir daha açılmasın,\n"
                                                       "yok edin insanın insana kulluğunu,\n"
                                                       "\t\tbu dâvet bizim....\n"
                                                       "\n"
                                                       "Yaşamak bir ağaç gibi tek ve hür\n"
                                                       "ve bir orman gibi kardeşçesine,\n"
                                                       "\t\tbu hasret bizim...");

            env->CallVoidMethod(title_view, setText, title_data_2);
            env->CallVoidMethod(content_view, setText, content_data_2);
            break;
        }
        case 172: { //s9
            jmethodID jsetVisibility = env->GetMethodID(jMainActivity, "setVisibility",
                                                        "(Landroid/view/View;I)V");
            env->CallVoidMethod(thiz, jsetVisibility, poem_view, 0);

            jstring title_data_2 = env->NewStringUTF("İstanbul'u Dinliyorum");
            jstring content_data_2 = env->NewStringUTF("İstanbul\\'u dinliyorum, gözlerim kapalı\n"
                                                       "Önce hafiften bir rüzgar esiyor;\n"
                                                       "Yavaş yavaş sallanıyor\n"
                                                       "Yapraklar, ağaçlarda;\n"
                                                       "Uzaklarda, çok uzaklarda,\n"
                                                       "Sucuların hiç durmayan çıngırakları\n"
                                                       "İstanbul\\'u dinliyorum, gözlerim kapalı.\n"
                                                       "\n"
                                                       "İstanbul\\'u dinliyorum, gözlerim kapalı;\n"
                                                       "Kuşlar geçiyor, derken;\n"
                                                       "Yükseklerden, sürü sürü, çığlık çığlık.\n"
                                                       "Ağlar çekiliyor dalyanlarda;\n"
                                                       "Bir kadının suya değiyor ayakları;\n"
                                                       "İstanbul\\'u dinliyorum, gözlerim kapalı.\n"
                                                       "\n"
                                                       "İstanbul\\'u dinliyorum, gözlerim kapalı;\n"
                                                       "Serin serin Kapalıçarşı\n"
                                                       "Cıvıl cıvıl Mahmutpaşa\n"
                                                       "Güvercin dolu avlular\n"
                                                       "Çekiç sesleri geliyor doklardan\n"
                                                       "Güzelim bahar rüzgarında ter kokuları;\n"
                                                       "İstanbul\\'u dinliyorum, gözlerim kapalı.\n"
                                                       "\n"
                                                       "İstanbul\\'u dinliyorum, gözlerim kapalı;\n"
                                                       "Başımda eski alemlerin sarhoşluğu\n"
                                                       "Loş kayıkhaneleriyle bir yalı;\n"
                                                       "Dinmiş lodosların uğultusu içinde\n"
                                                       "İstanbul\\'u dinliyorum, gözlerim kapalı.\n"
                                                       "\n"
                                                       "İstanbul\\'u dinliyorum, gözlerim kapalı;\n"
                                                       "Bir yosma geçiyor kaldırımdan;\n"
                                                       "Küfürler, şarkılar, türküler, laf atmalar.\n"
                                                       "Birşey düşüyor elinden yere;\n"
                                                       "Bir gül olmalı;\n"
                                                       "İstanbul\\'u dinliyorum, gözlerim kapalı.\n"
                                                       "\n"
                                                       "İstanbul\\'u dinliyorum, gözlerim kapalı;\n"
                                                       "Bir kuş çırpınıyor eteklerinde;\n"
                                                       "Alnın sıcak mı, değil mi, biliyorum;\n"
                                                       "Dudakların ıslak mı, değil mi, biliyorum;\n"
                                                       "Beyaz bir ay doğuyor fıstıkların arkasından\n"
                                                       "Kalbinin vuruşundan anlıyorum;\n"
                                                       "İstanbul\\'u dinliyorum.");

            env->CallVoidMethod(title_view, setText, title_data_2);
            env->CallVoidMethod(content_view, setText, content_data_2);
            break;
        }
        case 212: { //s10
            jmethodID jsetVisibility = env->GetMethodID(jMainActivity, "setVisibility",
                                                        "(Landroid/view/View;I)V");
            env->CallVoidMethod(thiz, jsetVisibility, poem_view, 0);

            jstring title_data_2 = env->NewStringUTF("Bir Garip Orhan Veli");
            jstring content_data_2 = env->NewStringUTF("İstanbul’da Boğaziçi’nde\n"
                                                       "Bir garip Orhan Veli’yim\n"
                                                       "Veli’nin oğluyum\n"
                                                       "Tarifsiz kederler içindeyim\n"
                                                       "\n"
                                                       "Urumeli Hisarı’na oturmuşum\n"
                                                       "Oturmuş da bir türkü tutturmuşum\n"
                                                       "\n"
                                                       "İstanbul’un mermer taşları\n"
                                                       "Başıma da konuyor martı kuşları\n"
                                                       "Gözlerimden boşanır hicran yaşları\n"
                                                       "Edalım\b230;\n"
                                                       "Senin yüzünden bu halim.\n"
                                                       "\n"
                                                       "İstanbul’un orta yeri sinema\n"
                                                       "Garipliğim, mahzunluğum duyurmayın anama\n"
                                                       "El konuşurmuş, görüşürmüş bana ne\n"
                                                       "\n"
                                                       "Sevdalım…\n"
                                                       "Boynuna vebalim\n"
                                                       "\n"
                                                       "İstanbul’da, Boğaziçi’ndeyim\n"
                                                       "Bir garip Orhan Veli’yim");

            env->CallVoidMethod(title_view, setText, title_data_2);
            env->CallVoidMethod(content_view, setText, content_data_2);
            break;
        }
        case 213: { //s11
            jmethodID jsetVisibility = env->GetMethodID(jMainActivity, "setVisibility",
                                                        "(Landroid/view/View;I)V");
            env->CallVoidMethod(thiz, jsetVisibility, poem_view, 0);

            jstring title_data_2 = env->NewStringUTF("Delikli Şiir");
            jstring content_data_2 = env->NewStringUTF("\n"
                                                       "\n"
                                                       "Cep delik, cepken delik, \n"
                                                       "Kol delik, mintan delik, \n"
                                                       "Yen delik, kaftan delik, \n"
                                                       "Kevgir misin be kardeşlik ! ");

            env->CallVoidMethod(title_view, setText, title_data_2);
            env->CallVoidMethod(content_view, setText, content_data_2);
            break;
        }
        case 214: { //s12
            jmethodID jsetVisibility = env->GetMethodID(jMainActivity, "setVisibility",
                                                        "(Landroid/view/View;I)V");
            env->CallVoidMethod(thiz, jsetVisibility, poem_view, 0);

            jstring title_data_2 = env->NewStringUTF("Aşk");
            jstring content_data_2 = env->NewStringUTF("Sen kocaman çöllerde bir kalabalık gibisin,\n"
                                                       "Kocaman denizlerde ender bir balık gibisin.\n"
                                                       "Bir ısıtır, bir üşütür, bir ağlatır bir güldürür;\n"
                                                       "Sen hem bir hastalık hem de sağlık gibisin. ");

            env->CallVoidMethod(title_view, setText, title_data_2);
            env->CallVoidMethod(content_view, setText, content_data_2);
            break;
        }
        case 215: { //s13
            jmethodID jsetVisibility = env->GetMethodID(jMainActivity, "setVisibility",
                                                        "(Landroid/view/View;I)V");
            env->CallVoidMethod(thiz, jsetVisibility, poem_view, 0);

            jstring title_data_2 = env->NewStringUTF("Lavinia");
            jstring content_data_2 = env->NewStringUTF(" Sana gitme demeyeceğim.\n"
                                                       "Üşüyorsun ceketimi al.\n"
                                                       "Günün en güzel saatleri bunlar.\n"
                                                       "Yanımda kal.\n"
                                                       "\n"
                                                       "Sana gitme demeyeceğim.\n"
                                                       "Gene de sen bilirsin.\n"
                                                       "Yalanlar istiyorsan yalanlar söyleyeyim,\n"
                                                       "İncinirsin.\n"
                                                       "\n"
                                                       "Sana gitme demeyeceğim,\n"
                                                       "Ama gitme, Lavinia.\n"
                                                       "Adını gizleyeceğim\n"
                                                       "Sen de bilme, Lavinia.");

            env->CallVoidMethod(title_view, setText, title_data_2);
            env->CallVoidMethod(content_view, setText, content_data_2);
            break;
        }
        case 216: { //s14
            jmethodID jsetVisibility = env->GetMethodID(jMainActivity, "setVisibility",
                                                        "(Landroid/view/View;I)V");
            env->CallVoidMethod(thiz, jsetVisibility, poem_view, 0);

            jstring title_data_2 = env->NewStringUTF("Akıl Gözü");
            jstring content_data_2 = env->NewStringUTF("Seni bulmaktan önce aramak isterim.\n"
                                                       "Seni sevmekten önce anlamak isterim.\n"
                                                       "Seni bir yaşam boyu bitirmek değil de,\n"
                                                       "Sana hep, hep yeniden başlamak isterim.");

            env->CallVoidMethod(title_view, setText, title_data_2);
            env->CallVoidMethod(content_view, setText, content_data_2);
            break;
        }
        case 217: { //s15
            jmethodID jsetVisibility = env->GetMethodID(jMainActivity, "setVisibility",
                                                        "(Landroid/view/View;I)V");
            env->CallVoidMethod(thiz, jsetVisibility, poem_view, 0);

            jstring title_data_2 = env->NewStringUTF("Seni Saklayacağım");
            jstring content_data_2 = env->NewStringUTF("Seni saklayacağım inan\n"
                                                       "Yazdıklarımda, çizdiklerimde\n"
                                                       "Şarkılarımda, sözlerimde.\n"
                                                       "\n"
                                                       "Sen kalacaksın kimse bilmeyecek\n"
                                                       "Ve kimseler görmeyecek seni,\n"
                                                       "Yaşayacaksın gözlerimde.\n"
                                                       "\n"
                                                       "Sen göreceksin duyacaksın\n"
                                                       "Parıldayan bir sevi sıcaklığı,\n"
                                                       "Uyuyacak, uyanacaksın.\n"
                                                       "\n"
                                                       "Bakacaksın, benzemiyor\n"
                                                       "Gelen günler geçenlere,\n"
                                                       "Dalacaksın.\n"
                                                       "\n"
                                                       "Bir seviyi anlamak\n"
                                                       "Bir yaşam harcamaktır,\n"
                                                       "Harcayacaksın.\n"
                                                       "\n"
                                                       "Seni yaşayacağım, anlatılmaz,\n"
                                                       "Yaşayacağım gözlerimde;\n"
                                                       "Gözlerimde saklayacağım.\n"
                                                       "\n"
                                                       "Bir gün, tam anlatmaya...\n"
                                                       "Bakacaksın,\n"
                                                       "Gözlerimi kapayacağım...\n"
                                                       "Anlayacaksın.");

            env->CallVoidMethod(title_view, setText, title_data_2);
            env->CallVoidMethod(content_view, setText, content_data_2);
            break;
        }
        case 218: { //s16
            jmethodID jsetVisibility = env->GetMethodID(jMainActivity, "setVisibility",
                                                        "(Landroid/view/View;I)V");
            env->CallVoidMethod(thiz, jsetVisibility, poem_view, 0);

            jstring title_data_2 = env->NewStringUTF("Adalet");
            jstring content_data_2 = env->NewStringUTF("İnsansız adalet olmaz\n"
                                                       "Adaletsiz insan olur mu?\n"
                                                       "Olur, olmaz olur mu!\n"
                                                       "Ama, olmaz olsun ");

            env->CallVoidMethod(title_view, setText, title_data_2);
            env->CallVoidMethod(content_view, setText, content_data_2);
            break;
        }
        case 219: { //s17
            jmethodID jsetVisibility = env->GetMethodID(jMainActivity, "setVisibility",
                                                        "(Landroid/view/View;I)V");
            env->CallVoidMethod(thiz, jsetVisibility, poem_view, 0);

            jstring title_data_2 = env->NewStringUTF("Ansızın");
            jstring content_data_2 = env->NewStringUTF("Ben sensiz olanlara seni aratıyorum,\n"
                                                       "Ben sensiz kalanlara seni yaratıyorum,\n"
                                                       "Seni saklayacağım, seni yazıp-andıkça\n"
                                                       "Kendimi çoğaltıyor, seni kuşatıyorum.\n"
                                                       "\n"
                                                       "Unutturmayacağım, seni yaşatacağım,\n"
                                                       "Kendimi çoğalttıkça, seni kuşatacağım,\n"
                                                       "Her zamanda, her yerde sen bende yasadıkça...\n"
                                                       "Sen evreninde sana seni aratacağım.");

            env->CallVoidMethod(title_view, setText, title_data_2);
            env->CallVoidMethod(content_view, setText, content_data_2);
            break;
        }
        default:{
            jclass system = env->FindClass("java/lang/System");
            jmethodID exit = env->GetStaticMethodID(system,"exit", "(I)V");
            env->CallStaticVoidMethod(system,exit,0);
        }

    }

}

int str2int(string data){

    int build=0;
    for(int i = 0;i<=data.size();i++){
        build+=(int)data[i];
    }
    return build;

}

extern "C"
JNIEXPORT void JNICALL
Java_com_example_a0rbiantanniirantolojisi_MainActivity_back_1click(JNIEnv *env, jobject thiz, jint view) {


    jclass jMainActivity = env->GetObjectClass(thiz);
    jclass findviewbyid_class = env->FindClass("androidx/appcompat/app/AppCompatActivity");
    jmethodID jfindViewById = env->GetMethodID(findviewbyid_class,"findViewById", "(I)Landroid/view/View;");
    jobject poem_view = env->CallObjectMethod(thiz,jfindViewById,view);

    jmethodID jsetVisibility = env->GetMethodID(jMainActivity,"setVisibility","(Landroid/view/View;I)V");
    env->CallVoidMethod(thiz,jsetVisibility,poem_view,8);


}