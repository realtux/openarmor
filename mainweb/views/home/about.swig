{% extends '../master.swig' %}
{% block content %}
<div class="container">
    <div class="row" style="margin-top: 40px;">
        <div class="col-md-12" style="margin-bottom: 40px;">
            <img src="/images/brian.jpg" style="margin: 20px; width: 300px; height: 300px; float: right;" />
            <h2>Meet Brian <small>(NSA's worst nightmare)</small></h2>
            Over the last 20 years or so, I have acquired a set of technical skills that allow me to design, create, and deploy
            virtually any type of software across any medium of deployment whether it be web, desktop, mobile, or integrated circuit.
            I am well versed in countless programming languages including: C, C++, Java, Python, PHP, NodeJS, C#, Scala, Go,
            Haskell, Lua, Perl, and Ruby to name a few; and I know exactly when and how to use each one effectively. This makes me
            very dangerous to the efforts of crooks, thieves, or governments whose endeavors are geared towards the violation of
            privacies and subversion of rights afforded to the citizens in the countries of which they reside.

            <br /><br />

            <h2>The Technology</h2>
            Today, the front facing presence of OpenArmor is written in NodeJS, SailsJS, AngularJS, Swig, Waterline,
            and MongoDB. The servers that run OpenArmor are on DigitalOcean running CentOS 6.5 images. The
            client software is written in C with the cURL and JSON-C libraries. The client software is portable and works
            perfect on Linux, Mac, and Windows. Advanced users are free to compile from source but binaries are also
            provided for specific OS versions. Every piece of software, including this website, is open-sourced and hosted on
            <a href="https://github.com/ebrian/openarmor" target="_blank">GitHub</a> and the servers
            is freely accessible via SSH for anybody to audit and verify that it does exactly what I say it does.

            <br /><br />

            <h2>Technological Roadmap</h2>

            <strong><span style="color: #0e0;">| <i class="fa fa-check fa-fw"></i> |</span> Phase 1: Boilerplate, design, and planning</strong><br />
            This phase will consist of getting openarmor.org operational, secure, auditable, and ready for the addition
            of new features. Also in this phase will be the setting up of the source code repositories for all of the
            OpenArmor projects.

            <br /><br />

            <strong><span style="color: #00e;">| <i class="fa fa-refresh fa-spin fa-fw"></i> |</span> Phase 2: OpenArmor Public Key Directory</strong><br />
            This phase will consist of engineering the single most critical component of the entire
            OpenArmor operation: the public key infrastructure. The intent is to create a public database of public keys
            of which there are active matching private keys held securely by their owners. This will enable OpenArmor
            to facilitate the low-level operation of securely transmitting payloads of any size to and from owners of
            key pairs.

            <br /><br />

            <strong><span style="color: #e00;">| <i class="fa fa-times fa-fw"></i> |</span> Phase 3: Educational Resources and External Tools</strong><br />
            This phase will consist of the collection of the prominent resources and tools in a particular field of operation
            whether that be privacy, security, or encryption. There are so many tools but only the best and actively maintained
            ones will be showcased on OpenArmor. Instructional videos will also be created for projects that are most important.

            <br /><br />

            <strong><span style="color: #e00;">| <i class="fa fa-times fa-fw"></i> |</span> Phase 4: OpenArmor Secure Text</strong><br />
            This phase will consist of the creation of the Android (and eventually iOS) platform for extremely high encrypted
            text messages. Because the payload will be generally less than 512 bytes, an 8192 bit encryption is appropriate and
            will not have any noticeable performance impact.
        </div>
    </div>
</div>