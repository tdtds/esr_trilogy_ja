= プロジェクト構造と所有権
　簡単な例は、プロジェクトの所有者・管理者が一人しかいない場合だ。この場合、紛争は起こり得ない。所有者がすべての決定をくだして、賞賛も批判もすべて自分で背負う。紛争として唯一あり得るのは引き継ぎ問題だけだ――もとの所有者がいなくなったり興味をなくしたりした場合、だれが新しい所有者になるのか。コミュニティとしても、問題(C)から、プロジェクトの分裂を避けたいと考える。こうした利害は文化規範として、所有者・管理者は自分がプロジェクトを管理できなくなった場合には、公式にその権利をだれかに譲るべきだというかたちで表現される。

　いちばん単純ながら、簡単ではないケースとしては、プロジェクトを所有する一人の「優しい独裁者」のもとに複数の共同管理者が働いているような場合だ。慣習は、グループプロジェクトについてはこのモードを好む。これは Linux カーネルや Emacs ほどの大プロジェクトでも使えるし、「だれが決める」問題も解決してくれるし、その解決法も、その他のあらゆる代替案より特にひどいというわけでもない。

　典型的には、優しい独裁者組織は、創始者が貢献者を集めるにしたがって所有管理者組織から発展して生まれる。所有者が独裁者であり続けても、それはプロジェクトのどの部分についてだれがクレジットを得るかという点について新しいレベルの紛争の可能性を持ち込むことになる。

　この状況では、慣習は所有者／独裁者が公平に貢献者にクレジットを与えることを義務づける（たとえばREADME履歴ファイルの中でのしかるべき記載なんかで）。ロック式所有権モデルでいえば、これはつまりプロジェクトへの貢献によってその評判リターンの一部を稼げるということだ（いいものも悪いものも）。

　この論理をつきつめると、「優しい独裁者」はその全プロジェクトを文句なしに占有しているわけじゃないのがわかる。方向性を決める決断をする権利を持ってはいるけれど、かれは実際問題として、全体の評判の一部を他人の作業と交換にゆずりわたす。農場での分益小作人との対比はほとんど抵抗しがたいものがある。ただし、ハッカーの場合、貢献者の名前はクレジットに残り、その貢献者がもはや活発でなくなったときにも、ある程度の「収益」をあげ続ける点はちがうけれど。

　優しい独裁者プロジェクトの参加者が増えるにつれて、参加者は二派にわかれる傾向がある。通常の貢献者と共同開発者だ。共同開発者となる典型的な道としては、プロジェクトの主要サブシステムの責任を負うことだ。もう一つは「高等修理卿」の役割を負って、多くのバグを抽出してなおすことだ。こういった方法を通じて、共同開発者は貢献者のなかでもプロジェクトに相当量の時間を投資し続ける。

　サブシステム所有者の役割は、本論の分析ではときに大事なので、もっと詳しくみるべきだ。ハッカーたちは「権威は責任に伴う」というのが好きだ。あるサブシステムのメンテナンス責任を負う共同開発者は、そのサブシステムの実装と、その他プロジェクトとのインターフェース部分との両方をコントロールできるようになる。それを修正できるのは、アーキテクトとして働くプロジェクトリーダだけ。このルールは、実質的にはプロジェクトのロック・モデル内部に、囲い込まれた所有地をつくりだしているものとみることができる。だからほかの領地境界とまったく同じように、紛争防止の役割を持つことになるわけだ。

　習慣的に、共同開発者のいるプロジェクトの「独裁者」またはプロジェクトリーダは、その共同開発者たちにだいじな判断のときには相談することが期待されている。これは特に、その決断が共同開発者「所有」のサブシステム（つまり、その共同開発者がそれに時間を注いで、責任を負っているサブシステム）にかかわるものであるときにあてはまる。賢いリーダは、プロジェクト内部の領土境界の機能がわかっているから、サブシステム所有者の決定をじゃましたり、ひっくりかえしたりするようなことは軽々しくしない。

　一部のすごく大きなプロジェクトは、「やさしい独裁者」モデルを完全に捨てている。これをやる方法の一つは、共同開発者たちを議決委員会にしてしまうことだ（Apacheがこうしている）。別の方法としては、独裁権を巡回方式にすることだ。ここではコントロール権は、上級共同開発者たちのサークルのなかで次から次へとまわされる（Perl開発者たちはこういう形の組織を採用している）。

　こういう複雑な仕組みは、一般には不安定でむずかしいものと思われている。明らかにこのむずかしいという印象は、委員会による設計や委員会そのものの危険性の関数である面が大きい。こういう問題について、ハッカー文化ははっきりわかっている。でも、ハッカーたちが委員会や巡回式組織について生理的に感じている気持ち悪さは、それがもっと簡単な場合についてハッカーたちが理由づけるときに使う、無意識のロック式モデルにおさまりにくいことがあるんだろう。こういう複雑な組織では、コントロールという意味での所有権や、評判の収益の所有権をきちんとつけるのがむずかしいからだ。内部の境界がどこにあるかは見えにくいので、グループとして例外的に高い調和と信頼関係ができていない限り、紛争を避けるのはむずかしい。



