pipeline {
    agent any
    options { 
        timestamps ()
        ansiColor('xterm')
    }
    
    stages {
        stage('Checkout') {
            steps {
                git branch: 'main', url: 'https://github.com/DaniRuan/CI-CD_Pipeline.git'
            }
        }
        
        stage('Ansible Playbook') {
    steps {
        withEnv([
            "ANSIBLE_FORCE_COLOR=true"
        ]) {
            ansiblePlaybook(
                installation: 'ansible2.5.11',
                playbook: 'my-playbook.yml',
                colorized: true
            )
        }
    }
}
        stage('Build') {
            steps {
                echo '\033[32m System testing started... \033[0m'
            }
        }
        stage('Test') {
            steps {
                bat 'pio test -vvv'
            }
        }
    }
}
