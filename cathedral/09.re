= バザール方式の前提条件とは
　この論文の初期レビューアーや、試験読者たちがたえず返してきた質問というのは、上手なバザール形式の開発に必要な条件は何か、というものだった。これはプロジェクトリーダーの資質と、共同開発者コミュニティをつくろうとしてコードを公開する時点での、コードの状態についての条件の両方についてのものだった。

　バザール形式で最初からコードを書くのが無理だというのは、まあはっきりしているだろう@<fn>{IN}。バザール形式でテストしたりデバッグしたり改善したりはできるけれど、プロジェクトを@<strong>{最初からバザール式で始めるのは}すごくむずかしいだろう。リーヌスはそんなことはしなかったし、ぼくもしなかった。あなたが生み出そうとしてる開発者コミュニティは、いじるために何か動いてテストできるものを必要としているんだ。

　コミュニティ形成を始めるときには、まずなによりも@<strong>{実現できそうな見込み}を示せなきゃならない。別にそのソフトは特によく書けてなくてもいい。雑で、バグだらけで、不完全で、ドキュメント皆無でもいい。でも絶対不可欠なのが、開発者候補たちに、それが目に見える将来にはなにか本当に使える代物に発展させられると説得できることだ。

　Linux と fetchmailは、どちらも強力で魅力的な基本デザインをもって公開された。ぼくが提出したバザールモデルについて考えてきた人の多くは、これがきわめて重要だということを正しく認識し、そこからいきなり、だったらプロジェクトリーダーには高度なデザイン上の直感と才能が必要にちがいないという結論に一足飛びにとびついてしまった。

　でもリーヌスはデザインを Unix からもらってる。ぼくはもともと先祖の popmailからアイデアを得てる（もっともそれは後に大きく変わった。割合から言えば Linuxよりはずっと大きな変化だ）。ということは、バザール形式のリーダー/コーディネーターはずばぬけたデザインの才能が本当にいるんだろうか、それとも他人のデザインの才能をうまく生かすだけでやっていけるんだろうか。

　コーディネーターが、とてつもないデザイン上のひらめきを自分で得る必要性は必ずしもないと思う。でも、絶対に必要なのは、その人物が@<strong>{ほかの人たちのよいデザイン上のアイデアを認識できる}ということだ。

　Linux も fetchmailも、この証拠を示している。リーヌスは（すでに述べた通り）、驚異的に独創的な設計者ではないけれど、よいデザインを認識してそれを Linuxカーネルに組み込む強力な第六感を示した。そしてすでに述べたように、fetchmail 最大の強力なデザインアイデア（SMTP転送）は他人にもらったものだった。

　この論文を早い時期に読んだ人たちは、おまえはバザールプロジェクトでのデザイン上の独創性を過小評価している、自分にはいろいろアイデアがあるもんだから、それが当然のことだと思ってるんだろう、と誉めてくれた。確かにこれは一理ある。ぼくの最大の強みは確かに、コーディングやデバッグではなく、デザイン能力にある。

　でもソフトの設計で、小利口で独創的になることの問題点は、それが習慣になってしまうことだ。ソフトは堅牢でシンプルにしておかなきゃダメなのに、反射的にそれを媚びた複雑なものにしてしまいがちになる。このまちがいのおかげでつぶれたプロジェクトもいくつかある。でも、fetchmailではそういうことにならずにすんだ。

　だから fetchmailプロジェクトが成功したのは、一部はぼくが小利口になりがちな自分の性格を抑えたからだと思う。これは（少なくとも）バザールプロジェクトの成功にデザイン上の独創性が不可欠という議論の反証になっている。そして Linux もそうだ。もしリーヌス・トーヴァルズが開発途上で根本的な OSデザインの革新をやってのけようとしていたら、その結果のカーネルがいまのものほど安定してうまくいっていたかどうか？

　一定レベルのデザインとコード書き能力は必要だけれど、でもバザール式のプロジェクトを始めようかと真剣に考えている人なら、ほとんどだれでもそんな最低限以上の能力はあるだろう。フリーソフト/オープンソースコミュニティ内における評判の市場は、最後まで面倒を見られないような開発プロジェクトを始めないように、みんなに微妙な圧力をかける。いまのところ、これはなかなかうまく機能してきたようだ。

　別の才能で、ソフト開発とはふつうは関連づけられないけれど、でもバザールプロジェクトではデザイン上の才覚に匹敵するほど――あるいはそれ以上――重要なものがあると思う。バザールプロジェクトは、コーディネータやリーダの対人能力やコミュニケーション能力が優れていないとダメだ。

　これは説明するまでもないだろう。開発コミュニティをつくるには、人を引きつける必要がある。自分のやっていることに興味を持たせて、各人のやっている仕事量についてみんなが満足しているように気を配る必要がある。技術的な先進性は、これを実現する役にはおおいに立つけれど、でもそれだけではぜんぜん足りない。その人が発する個性も大事だ。

　リーヌスがナイスガイで、みんなかれを気に入って手伝いたくなってしまうのは、偶然ではない。ぼくがエネルギッシュで外向的で、大人数を動かすのが好きで、コメディアンの話術や本能をちょっと備えているのも偶然じゃない。バザールモデルが機能するためには、人を魅了する能力が少しくらいでもあると、きわめて役に立つのだ。

//footnote[IN][　バザール方式でゼロからプロジェクトを立ち上げられるかという問題は、バザール方式が真に革新的なものをサポートできるのか、という問題と関係している。ある人に言わせると、強いリーダーシップのないバザールは、エンジニアリングの最先端にすでに存在しているアイデアをまねしたり、改良したりできるだけで、その最先端を先に進めることはできないそうだ。この議論を提出したいちばん悪名高い例が、ハロウィーン文書（@<href>{http://www.opensource.org/halloween/, 原文}、@<href>{http://cruel.org/freeware/halloween.html, 翻訳}）だろう。オープンソース現象について書かれた、マイクロソフトの恥ずかしい社内メモだ。この著者たちは、Linux が Unix に似た OS を開発するのを「テールライトを追いかける」と例えてくれて、「（そのプロジェクトがひとたび技術の最先端の「飽和点」に達してしまえば）、新たなフロンティアに向けてみんなを押し進めるために必要となるマネジメントのレベルはとてつもないものとなる」と論じている。@<br>{}　この議論には、深刻な事実関係のまちがいが含まれている。その一つは、ハロウィーン文書の著者たち自らが次のように洞察しているところではっきり表明されている：「具体的にはこれは、新しい研究上のアイデアはまず Linux上で実装されて入手可能となり、その後でほかのプラットホームで提供されたり組み込まれたりするようになる、ということだ」@<br>{}　ここで Linuxを「オープンソース」と読み替えれば、これがまるで目新しい現象でないことはわかるだろう。歴史的に、オープンソース・コミュニティが Emacs やWorld Wide Webやインターネットを発明したのは、テールライトを追っかけたり、とてつもないレベルのマネジメントがあったりしたためではない――そしていまでも、オープンソースではとても多くの独創的な仕事が続いていて、選ぶのに目移りするほどだ。あえて一つ選ぶとすると、GNOME プロジェクトは GUIとオブジェクト技術の最先端を押し広げていて、 Linuxとはかけ離れたコンピュータ業界紙からも大いに注目されている。その他の例も目白押しで、これはいつでもいいから @<href>{http://freshmeat.net/, Freshmeat}を訪ねてみればすぐに証明される。@<br>{}　でも、伽藍方式が（あるいはバザール方式でも、その他どんなマネジメント方式でもいい）、なにやら技術革新を信頼できるかたちで生じさせられるという、暗黙の仮定にはもっと根本的なまちがいがある。だって、そんなのナンセンスだからだ。群衆は、突破口となるような洞察なんか持てない――バザール方式のアナキストたちによるボランティア集団でさえ、まともなオリジナリティは発揮できないし、ましてやなにか現状に生存が係っているような人々からなる、企業委員会なんかからそんなものは絶対に出てきやしない。@<strong>{洞察は個人からくる}。それをとりまく社会機構としてせいぜい期待できるのは、その突破口となる思いつきに対して@<strong>{敏感に反応すること}くらいだ――それをつぶすのではなく、ちゃんと育てて報酬を与え、きちんとテストしてやることだ。@<br>{}　これをロマンチックな見方だと決めつける人もいるだろう。孤独な発明家というステロタイプに逆戻りしている、と。ちがうね。ぼくは別に、いったん生まれた突破口となる洞察をグループが@<strong>{育てられない}なんて言ってるわけではない。それどころか、ピアレビューのプロセスから学ぶのは、こうした開発グループこそが高品質の結果を生み出すために不可欠だということだ。むしろぼくが指摘しているのは、そういうグループ開発もすべて出発点は――つまり、それに火をつけるのは必ず――だれか一人が思いついた、いいアイデア一つなんだ、ということだ。伽藍やバザールなんかの社会的な機構は、その火花をつかまえて洗練させることができるけれど、でもその機構が命令して着想を生み出したりはできないんだ。@<br>{}　だから、技術革新の根本問題（これはソフトウェアに限らずあらゆるところで）というのは、そのアイデアをどうやってつぶさずにおくか、ということだ――でも、もっと根本的には、@<strong>{そもそも洞察を持てるような人たちをたくさん育てるにはどうしたらいいか}、ということだ。@<br>{}　伽藍方式の開発がこいつを実現できて、参入障壁が低い、プロセスの流動的なバザールではこれができないと仮定するのはバカげている。もしたった一人のたった一つのアイデアでいいなら、一人の人間がそのいいアイデアで、何百、何千という人々の協力をすぐに集められる社会方式のほうが、クビになる心配なしにそのアイデアに基づく作業ができるようになるために、階級機構に対して政治的な売り込みをしなくてはならないようなシステムに比べて、革新は早いに決まっている。@<br>{}　そして実際に、伽藍方式を使った組織によるソフトの技術革新の歴史を見てみると、あまり数がないことがすぐにわかる。巨大企業は新しいアイデアの源として大学の研究に頼っている（だからこそハロウィーン文書の著者たちは、Linuxがその研究成果をずっとはやく取り入れられるということに危機意識を見せている）。あるいは、革新者の頭脳を中心に生まれた小企業を買収するだろう。いずれの場合にも、伽藍文化には技術革新は根付いていない。それどころか、そうやって輸入された技術革新の多くは、ハロウィーン文書の著者たちがあんなに持ち上げる「とてつもないレベルのマネジメント」によって、静かに窒息させられてしまう結果となる。@<br>{}　これはでも、否定的なポイントだ。読者のみんなは、もっと肯定的な論点のほうが役にたつだろう。試しに、以下のような実験をしてみたらどうだろう。@<br>{}1. 一貫性を持って適用できると思うような、オリジナリティをはかる尺度を選ぶこと。きみの定義が「オリジナリティなんて見りゃわかる」というものであっても、このテストでは問題にはならない。@<br>{}2. Linux と競合しているクローズドソースの OS をどれでもいいから選んで、その OS 上で進行中の開発作業を記述した最高の情報源を選ぶこと。@<br>{}3. その情報源と Freshmeat を一ヶ月眺めること。毎日、「オリジナル」な仕事だと思われるリリースの発表の数を数えること。「オリジナル」の定義をその別の OS にも適用して、その数を数える。@<br>{}4. 30 日たったら、両方の数字をそれぞれ合計。@<br>{}　これを書いた日だと、Freshmeat はリリースのアナウンス 22 つがあって、そのうち 3つは何らかの形で最先端をさらに先へ進めるようなものだった。この日のFreshmeatは低調だったけれど、でもクローズドソースのどんなプロジェクトでも、ものになりそうな技術革新が一月 3つもあったら驚嘆しちゃうね。]