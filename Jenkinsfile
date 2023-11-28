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
        stage('Build') {
            steps {
                echo '\033[32m System testing started... \033[0m'
            }
        }
        stage('Test') {
            steps {
            ansiColor('xterm') {
                ansiblePlaybook colorized: true, installation: 'ansible2.5.11', inventory: 'inventory/hosts', playbook: 'playbooks/example.yml'
            }
                bat 'pio test -vvv'
            }
        }
    }
}
