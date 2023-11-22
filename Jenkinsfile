pipeline {
    agent any

    //environment {
    //    PLATFORMIO_HOME = 'C:\\Users\\danny\\OneDrive\\Documents\\PlatformIO\\Projects\\Test_hardware'
    //}

    stages {
        stage('Checkout') {
            steps {
                git branch: 'main', url: 'https://github.com/DaniRuan/CI-CD_Pipeline.git'
            }
        }
        stage('Build') {
            steps {
                bat 'echo System testing started...'
            }
        }
        stage('Test') {
            steps {
                bat 'pio test -d, --project-dir C:\\Users\\danny\\OneDrive\\Documents\\EDAG\\Codes\\Test_hardware'
            }
        }
    }
}
